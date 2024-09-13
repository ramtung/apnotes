#ifndef __RESPONSE__
#define __RESPONSE__
#include "../utils/include.hpp"
#include "../utils/utilities.hpp"
#include <string>

const std::string SERVER_NAME = "AP HTTP Server";

class Response {
public:
  Response(int code = 200);
  std::string print(int &);
  void log(bool showBody = false);
  void setHeader(std::string name, std::string value);
  void setBody(std::string _body);
  void setStatus(int code, std::string phrase);
  void setStatus(int code);
  int getStatusCode();
  std::string getStatusPhrase();
  std::string getHeader(std::string name);
  void setSessionId(std::string sessionId);
  static Response *redirect(std::string url);

private:
  int code;

  std::string phrase;
  std::string body;
  cimap headers;
};

#endif
