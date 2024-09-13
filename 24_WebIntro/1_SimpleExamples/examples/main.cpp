#include "handlers.hpp"
#include "../server/server.hpp"
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  try {
    Server server(8080);

    server.get("/hello", new HelloWorld());
    server.get("/add", new Adder());
    server.get("/addform", new ShowPage("static/addform.html"));
    
    server.run();
  } catch (Server::Exception e) {
    cerr << e.getMessage() << endl;
  }
}
