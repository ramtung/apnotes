#ifndef __REQUEST__
#define __REQUEST__
#include "../utils/include.hpp"
#include "../utils/utilities.hpp"
#include <string>

class Request {
public:
  Request(std::string method = "GET");
  std::string getPath();
  void setPath(std::string);
  Method getMethod();
  std::string getQueryParam(std::string key);
  void setQueryParam(std::string key, std::string value, bool encode = true);
  std::string getBodyParam(std::string key);
  void setBodyParam(std::string key, std::string value, bool encode = true);
  std::string getHeader(std::string key);
  void setHeader(std::string key, std::string value, bool encode = true);
  std::string getBody();
  std::string getSessionId();
  void setSessionId(std::string);
  std::string getQueryString();
  cimap getHeaders();
  void log();

private:
  std::string path;
  Method method;
  cimap headers;
  cimap query;
  cimap body;
};
#endif
