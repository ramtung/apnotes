#include "route.hpp"
#include "server.hpp"

using namespace std;

Route::Route(Method _method, string _path) {
  method = _method;
  path = _path;
}

void Route::setHandler(RequestHandler *_handler) { handler = _handler; }

bool Route::isMatch(Method _method, string url) {
  return (url == path) && (_method == method);
}

Response *Route::handle(Request *req) { return handler->callback(req); }

Route::~Route() { delete handler; }
