#include <iostream>
#include <csignal>
#include <unistd.h>
using namespace std;

void handle_sigint(int sig) {
  cout << "Caught signal" << sig << endl;
}

int main() {
  signal(SIGINT, handle_sigint);  // Register the callback

  while (1) {
    printf("Running...\n");
    sleep(1);
  }

  return 0;
}
