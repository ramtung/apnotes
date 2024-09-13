#ifndef _MY_HANDLERS_
#define _MY_HANDLERS_

#include "../server/server.hpp"
#include <iostream>

class HelloWorld : public RequestHandler {
public:
  Response *callback(Request *);
};

class Adder : public RequestHandler {
public:
  Response *callback(Request *);
};

#endif