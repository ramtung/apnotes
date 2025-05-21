#include <iostream>
using namespace std;

void print(int x) {
  cout << x << endl;
}

void print_twice(int x) {
  cout << x << ' ' << x << endl;
}

int main() {
  void (*func_ptr)(int);

  func_ptr = print;
  func_ptr(10);

  func_ptr = print_twice;
  func_ptr(20);
}