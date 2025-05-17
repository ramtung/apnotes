#include <iostream>
#include <string>
using namespace std;

template<typename T>
class Cell {
public:
  Cell(const T& value) : value_(value) {}
  T get_value() const;
  void set_value(const T& value);
private:
  T value_;
};

template<typename T>
T Cell<T>::get_value() const {
  return value_;
}

template<typename T>
void Cell<T>::set_value(const T& value) {
  value_ = value;
}

int main() {
  Cell<int> a(10);
  a.set_value(12);
  cout << a.get_value() << endl;

  string s = "JJ";
  string t = "UU";
  Cell<string> b(s);
  b.set_value(t);
  cout << b.get_value() << endl;
}