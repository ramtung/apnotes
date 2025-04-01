#include <iostream>
using namespace std;

class C {
public:
  explicit C(int elem) { element = elem; }
  void m() { /* do something */ }
private:
  int element;
};

void f(C c) {
  c.m();
}

int main() {	
  // compile error: implicit conversion not allowed
  // f(8); 
}