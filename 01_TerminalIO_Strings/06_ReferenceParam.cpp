#include <iostream>
using namespace std;

void makeDouble(int& x) {
  x *= 2;
}

int main() {
  int a = 10;
  makeDouble(a);
  cout << a << endl;
}