#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

#define TIMEOUT (rand() % 10 != 0)
#define MAX_ATTEMPTS 3

class NetworkError {
public:
  NetworkError(string err) : error(err) {}
  string get_error() { return error; }
private:
  string error;
  // other fields describing the error
};

void open_connection() {
  // opens the network connection
}

void close_connection() {
  // closes the network connection
}

void send_bytes(const char* bytes, int len) {
  // try to send bytes over the network
  if (TIMEOUT)
    throw NetworkError("Connection time-out");
}

void send_message(string msg) {
  open_connection();
  int attempts = 0;
  while (attempts < MAX_ATTEMPTS)
    try {
      send_bytes(msg.c_str(), msg.length());
      cout << "Message sent successfully\n";
      break;
    } catch(NetworkError& ex) {
      cerr << "could not send the message";
      attempts++;
      if (attempts < MAX_ATTEMPTS)
        cerr << ", retrying...";
      else {
        cerr << ", terminating\n";
        close_connection();
        throw;
      }
      cerr << endl;
    }
  close_connection();
}

int main() {
  long seed = time(0);
  cout << "random seed = " << seed << endl;
  srand(seed);

  send_message("Hello");
}
