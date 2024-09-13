#include "server.hpp"
#include "../utils/utilities.hpp"
#include <algorithm>
#include <dirent.h>
#include <errno.h>
#include <fstream>
#include <iostream>
#include <limits.h>
#include <map>
#include <netinet/in.h>
#include <sstream>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

class NotFoundHandler : public RequestHandler {
  string notFoundErrPage;

public:
  NotFoundHandler(string notFoundErrPage = "")
      : notFoundErrPage(notFoundErrPage) {}
  Response *callback(Request *req) {
    Response *res = new Response(404);
    if (!notFoundErrPage.empty()) {
      res->setHeader("Content-Type", "text/" + getExtension(notFoundErrPage));
      res->setBody(readFile(notFoundErrPage.c_str()));
    }
    return res;
  }
};

class ServerErrorHandler {
public:
  static Response *callback(string msg) {
    Response *res = new Response(500);
    res->setHeader("Content-Type", "application/json");
    res->setBody("{ \"code\": \"500\", \"message\": \"" + msg + "\" }\n");
    return res;
  }
};

void split(string str, string separator, int max, vector<string> &results) {
  int i = 0;
  size_t found = str.find_first_of(separator);

  while (found != string::npos) {
    if (found > 0)
      results.push_back(str.substr(0, found));
    str = str.substr(found + 1);
    found = str.find_first_of(separator);

    if (max > -1 && ++i == max)
      break;
  }
  if (str.length() > 0)
    results.push_back(str);
}

Request *parseRawReq(char *headersRaw, size_t length) {
  Request *req;
  string boundary;
  string lastFieldKey;
  string lastFieldValue;
  bool shouldBeEmpty;
  try {
    enum State { REQ, HEADER, BODY, BODY_HEADER, BODY_BODY };
    State state = REQ;
    vector<string> headers = split(string(headersRaw), "\r\n", false);
    for (size_t i = 0; i < length; i++) {
      if (!headersRaw[i])
        throw Server::Exception("Unsupported binary data in request.");
    }
    size_t realBodySize =
        string(headersRaw).size() -
        split(string(headersRaw), "\r\n\r\n", false)[0].size() -
        string("\r\n\r\n").size();
    for (size_t headerIndex = 0; headerIndex < headers.size(); headerIndex++) {
      string line = headers[headerIndex];
      switch (state) {
      case REQ: {
        vector<string> R = split(line, " ", false);
        if (R.size() != 3) {
          throw Server::Exception("Invalid header (request line)");
        }
        req = new Request(R[0]);
        req->setPath(R[1]);
        size_t pos = req->getPath().find('?');
        if (pos != string::npos && pos != req->getPath().size() - 1) {
          vector<string> Q1 = split(req->getPath().substr(pos + 1), "&", false);
          for (vector<string>::size_type q = 0; q < Q1.size(); q++) {
            vector<string> Q2 = split(Q1[q], "=", false);
            if (Q2.size() == 2)
              req->setQueryParam(Q2[0], Q2[1], false);
            else
              throw Server::Exception("Invalid query");
          }
        }
        req->setPath(req->getPath().substr(0, pos));
        state = HEADER;
      } break;
      case HEADER: {
        if (line == "") {
          state = BODY;
          if (req->getHeader("Content-Type")
                  .substr(0, string("multipart/form-data").size()) ==
              "multipart/form-data") {
            boundary =
                req->getHeader("Content-Type")
                    .substr(req->getHeader("Content-Type").find("boundary=") +
                            string("boundary=").size());
          }
          break;
        }
        vector<string> R = split(line, ": ", false);
        if (R.size() != 2)
          throw Server::Exception("Invalid header");
        req->setHeader(R[0], R[1], false);
        if (toLowerCase(R[0]) == toLowerCase("Content-Length"))
          if (realBodySize != (size_t)atol(R[1].c_str()))
            return NULL;
      } break;
      case BODY: {
        if (req->getHeader("Content-Type") == "") {
        } else if (req->getHeader("Content-Type") ==
                   "application/x-www-form-urlencoded") {
          vector<string> body = split(line, "&", false);
          for (size_t i = 0; i < body.size(); i++) {
            vector<string> field = split(body[i], "=", false);
            if (field.size() == 2)
              req->setBodyParam(field[0], field[1], false);
            else if (field.size() == 1)
              req->setBodyParam(field[0], "", false);
            else
              throw Server::Exception("Invalid body");
          }
        } else if (req->getHeader("Content-Type")
                       .substr(0, string("multipart/form-data").size()) ==
                   "multipart/form-data") {
          if (line == "--" + boundary || line == "--" + boundary + "--") {
            lastFieldKey = "";
            lastFieldValue = "";
            shouldBeEmpty = false;
            state = BODY_HEADER;
          }
        } else {
          throw Server::Exception("Unsupported body type: " +
                                  req->getHeader("Content-Type"));
        }
      } break;
      case BODY_HEADER: {
        if (line == "") {
          state = BODY_BODY;
          break;
        }
        vector<string> R = split(line, ": ", false);
        if (R.size() != 2)
          throw Server::Exception("Invalid header");
        if (toLowerCase(R[0]) == toLowerCase("Content-Disposition")) {
          vector<string> A = split(R[1], "; ", false);
          for (size_t i = 0; i < A.size(); i++) {
            vector<string> attr = split(A[i], "=", false);
            if (attr.size() == 2) {
              if (toLowerCase(attr[0]) == toLowerCase("name")) {
                lastFieldKey = attr[1].substr(1, attr[1].size() - 2);
              }
            } else if (attr.size() == 1) {
            } else
              throw Server::Exception("Invalid body attribute");
          }
        } else if (toLowerCase(R[0]) == toLowerCase("Content-Type")) {
          if (toLowerCase(R[1]) == toLowerCase("application/octet-stream"))
            shouldBeEmpty = true;
          else if (toLowerCase(R[1].substr(0, R[1].find("/"))) !=
                   toLowerCase("text"))
            throw Server::Exception("Unsupported file type: " + R[1]);
        }
      } break;
      case BODY_BODY: {
        if (line == "--" + boundary || line == "--" + boundary + "--") {
          req->setBodyParam(lastFieldKey,
                            lastFieldValue.substr(string("\r\n").size()),
                            false);
          lastFieldKey = "";
          lastFieldValue = "";
          state = BODY_HEADER;
          shouldBeEmpty = false;
        } else if (shouldBeEmpty && !line.empty())
          throw Server::Exception("Unsupported file type: " +
                                  string("application/octet-stream"));
        else
          lastFieldValue += "\r\n" + line;
      } break;
      }
    }
  } catch (Server::Exception) {
    throw;
  } catch (...) {
    throw Server::Exception("Error on parsing request");
  }
  return req;
}

Server::Server(int _port) : port(_port) {
  notFoundHandler = new NotFoundHandler();

  sc = socket(AF_INET, SOCK_STREAM, 0);
  int sc_option = 1;
  setsockopt(sc, SOL_SOCKET, SO_REUSEADDR, &sc_option, sizeof(sc_option));
  if (sc < 0)
    throw Exception("Error on opening socket: " + string(strerror(errno)));
  struct sockaddr_in serv_addr;
  serv_addr.sin_family = AF_INET;
  serv_addr.sin_addr.s_addr = INADDR_ANY;
  serv_addr.sin_port = htons(port);

  if (::bind(sc, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) != 0) {
    throw Exception("Error on binding: " + string(strerror(errno)));
  }
}

void Server::get(string path, RequestHandler *handler) {
  Route *route = new Route(GET, path);
  route->setHandler(handler);
  routes.push_back(route);
}

void Server::post(string path, RequestHandler *handler) {
  Route *route = new Route(POST, path);
  route->setHandler(handler);
  routes.push_back(route);
}

void Server::run() {
  ::listen(sc, 10);

  struct sockaddr_in cli_addr;
  socklen_t clilen;
  clilen = sizeof(cli_addr);
  int newsc;

  while (true) {
    newsc = ::accept(sc, (struct sockaddr *)&cli_addr, &clilen);
    if (newsc < 0)
      throw Exception("Error on accept: " + string(strerror(errno)));
    Response *res = NULL;
    try {
      char data[BUFSIZE + 1];
      size_t recv_len, recv_total_len = 0;
      Request *req = NULL;
      while (!req) {
        recv_len =
            recv(newsc, data + recv_total_len, BUFSIZE - recv_total_len, 0);
        if (recv_len > 0) {
          recv_total_len += recv_len;
          data[recv_total_len >= 0 ? recv_total_len : 0] = 0;
          req = parseRawReq(data, recv_total_len);
        } else
          break;
      }
      if (!recv_total_len) {
        ::close(newsc);
        continue;
      }
      req->log();
      res = new Response();
      size_t i = 0;
      for (; i < routes.size(); i++) {
        if (routes[i]->isMatch(req->getMethod(), req->getPath())) {
          res = routes[i]->handle(req);
          break;
        }
      }
      if (i == routes.size() && notFoundHandler) {
        res = notFoundHandler->callback(req);
      }
      delete req;
    } catch (Exception exc) {
      delete res;
      res = ServerErrorHandler::callback(exc.getMessage());
    }
    int si;
    res->log();
    string res_data = res->print(si);
    delete res;
    int wr = send(newsc, res_data.c_str(), si, 0);
    if (wr != si)
      throw Exception("Send error: " + string(strerror(errno)));
    ::close(newsc);
  }
}

Server::~Server() {
  if (sc >= 0)
    ::close(sc);
  delete notFoundHandler;
  for (size_t i = 0; i < routes.size(); ++i)
    delete routes[i];
}

Server::Exception::Exception(const string msg) { message = msg; }

string Server::Exception::getMessage() { return message; }

ShowFile::ShowFile(string _filePath, string _fileType) {
  filePath = _filePath;
  fileType = _fileType;
}

Response *ShowFile::callback(Request *req) {
  Response *res = new Response;
  res->setHeader("Content-Type", fileType);
  res->setBody(readFile(filePath.c_str()));
  return res;
}

ShowPage::ShowPage(string filePath)
    : ShowFile(filePath, "text/" + getExtension(filePath)) {}

ShowImage::ShowImage(string filePath)
    : ShowFile(filePath, "image/" + getExtension(filePath)) {}

void Server::setNotFoundErrPage(std::string notFoundErrPage) {
  delete notFoundHandler;
  notFoundHandler = new NotFoundHandler(notFoundErrPage);
}

RequestHandler::~RequestHandler() {}
