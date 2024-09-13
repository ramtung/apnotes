#include <cctype>
#include "strutil.hpp"
using namespace std;

bool conv_error = false;

string reverse(string s) {
	if (s.length() < 2)
		return s;
	return reverse(s.substr(1)) + s[0];
}

string toUpper(string s) {
	string result = s;
	for (int i = 0; i < s.length(); i++)
		result[i] = toupper(s[i]);
	return result;
}

int toInteger(string s) {
	conv_error = false;
	int result = 0;
	for (int i = s.length()-1; i >= 0; i--) {
		int lastDigit = s[i]-'0';
		if (lastDigit < 0 || lastDigit > 9) {
			conv_error = true;
			return 0;
		}
		result += lastDigit;
	}
	return result;
}
