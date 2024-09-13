#include "utilities.hpp"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

char easyToLowerCase(char in) {
  if (in <= 'Z' && in >= 'A')
    return in - ('Z' - 'z');
  return in;
}

string toLowerCase(string s) {
  transform(s.begin(), s.end(), s.begin(), easyToLowerCase);
  return s;
}

bool comp::operator()(const string &lhs, const string &rhs) const {
  return toLowerCase(lhs) < toLowerCase(rhs);
}

string readFile(const char *filename) {
  string s = "";
  char buffer[BUFFER_SIZE];
  ifstream infile(filename);
  infile.seekg(0, infile.end);
  size_t length = infile.tellg();
  infile.seekg(0, infile.beg);
  if (length > sizeof(buffer))
    length = sizeof(buffer);

  infile.read(buffer, length);
  for (size_t i = 0; i < length; i++) {
    s += buffer[i];
  }
  return s;
}

string readFile(string filename) { return readFile(filename.c_str()); }

vector<string> split(string s, string delimiter, bool trim) {
  vector<string> tokens;
  if (trim)
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
  size_t pos = 0;
  string token;
  while ((pos = s.find(delimiter)) != string::npos) {
    token = s.substr(0, pos);
    tokens.push_back(token);
    s.erase(0, pos + delimiter.length());
  }
  tokens.push_back(s);
  return tokens;
}

void printVector(vector<string> v) {
  for (string s : v)
    cout << s << endl;
}

string urlEncode(string const &str) {
  char encode_buf[4];
  string result;
  encode_buf[0] = '%';
  result.reserve(str.size());

  // character selection for this algorithm is based on the following url:
  // http://www.blooberry.com/indexdot/html/topics/urlencoding.htm

  for (size_t pos = 0; pos < str.size(); ++pos) {
    switch (str[pos]) {
    default:
      if (str[pos] >= 32 && str[pos] < 127) {
        // character does not need to be escaped
        result += str[pos];
        break;
      }
      // else pass through to next case
    case '$':
    case '&':
    case '+':
    case ',':
    case '/':
    case ':':
    case ';':
    case '=':
    case '?':
    case '@':
    case '"':
    case '<':
    case '>':
    case '#':
    case '%':
    case '{':
    case '}':
    case '|':
    case '\\':
    case '^':
    case '~':
    case '[':
    case ']':
    case '`':
      // the character needs to be encoded
      sprintf(encode_buf + 1, "%02X", str[pos]);
      result += encode_buf;
      break;
    }
  };
  return result;
}

string urlDecode(string const &str) {
  char decode_buf[3];
  string result;
  result.reserve(str.size());

  for (size_t pos = 0; pos < str.size(); ++pos) {
    switch (str[pos]) {
    case '+':
      // convert to space character
      result += ' ';
      break;
    case '%':
      // decode hexidecimal value
      if (pos + 2 < str.size()) {
        decode_buf[0] = str[++pos];
        decode_buf[1] = str[++pos];
        decode_buf[2] = '\0';
        result += static_cast<char>(strtol(decode_buf, nullptr, 16));
      } else {
        // recover from error by not decoding character
        result += '%';
      }
      break;
    default:
      // character does not need to be escaped
      result += str[pos];
    }
  }
  return result;
}

string getExtension(string filePath) {
  size_t pos = filePath.find_last_of(".");
  return filePath.substr(pos != string::npos ? pos + 1 : filePath.size());
}

vector<string> tokenize(const string &cnt, string delimiter) {
  vector<string> res;
  istringstream is(cnt);
  string part;
  while (getline(is, part, ','))
    res.push_back(part);
  return res;
}

void replaceAll(std::string &str, const std::string &from,
                const std::string &to) {
  if (from.empty())
    return;
  size_t start_pos = 0;
  while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
    str.replace(start_pos, from.length(), to);
    start_pos += to.length(); // In case 'to' contains 'from', like replacing
                              // 'x' with 'yx'
  }
}
