#include <string>
#include <sstream>
#include "handlers.hpp"
using namespace std;

Response *HelloWorld::callback(Request *req) {
  Response *res = new Response;
  res->setHeader("Content-Type", "text/html");
  string body;
  body += "<!DOCTYPE html>";
  body += "<html>";
  body += "<body>";
  body += "<h1>Hello World!</h1>";
  body += "</body>";
  body += "</html>";
  res->setBody(body);
  return res;
}




Response *Adder::callback(Request *req) {
  Response *res = new Response;
  res->setHeader("Content-Type", "text/html");

  int num1 = stoi(req->getQueryParam("num1"));
  int num2 = stoi(req->getQueryParam("num2"));

  ostringstream body;
  body 
    << "<!DOCTYPE html>" << endl
    << "<html>" << endl
    << "<body>" << endl
    << num1 << "+" << num2 << "=" << (num1 + num2) << endl
    << "</body>" << endl
    << "</html>" << endl;
  res->setBody(body.str());
  return res;
}

