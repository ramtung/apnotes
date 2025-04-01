#include <iostream>
using namespace std;

class C {
public:
  C(int elem) { element = elem; }
  void m() { /* do something */ }
private:
  int element;
};

void f(C c) {
  c.m();
}

int main() {	
  f(8); // C's ctor is called implicitly
}