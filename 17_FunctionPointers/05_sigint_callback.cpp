#include <iostream>
#include <csignal>
using namespace std;

void handle_sigint(int sig) {
  cout << "\nI won't let you go like this!" << endl;
}

int main() {
  signal(SIGINT, handle_sigint);

  int x, y;
  cout << "Enter two integers: ";
  cin >> x >> y;
  cout << x << '+' << y << '=' << (x+y) << endl;
}