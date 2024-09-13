#include "handlers.hpp"
#include "../server/server.hpp"
#include "gbservice.hpp"
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  try {
    Server server(8080);

    GradebookService gbs(0.2, 0.4, 0.4);
    server.get("/", new ShowGradebook(&gbs));
    server.get("/editGrades", new EditForm(&gbs));
    server.post("/updateGrades", new UpdateGrades(&gbs));
    
    server.run();
  } catch (Server::Exception e) {
    cerr << e.getMessage() << endl;
  }
}
