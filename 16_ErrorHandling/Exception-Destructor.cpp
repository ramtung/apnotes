#include <iostream>
#include <stdexcept>
using namespace std;

class C {
public:
  C(int id) : id_(id) { 
    cout << "C constructed with id " 
         << id_ << endl; 
  }
  ~C() { 
    cout << "C destructed with id " 
         << id_ << endl; 
  }
private:
  int id_;
};

void f() {
  cout << "throwing exception\n";
  throw runtime_error("bad thing happened!");
}

void g() {
  cout << "enter g()\n";
  C c(1);
  C* cp = new C(2); 
  f();
  delete cp;
  cout << "exit g()\n";
}

void h() {
  try {
    g();
  } catch (runtime_error& ex) {
    cout << "back to normal\n";
  }
}

int main() {
  h();
}
