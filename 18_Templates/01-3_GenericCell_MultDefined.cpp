#include <iostream>
#include <string>
using namespace std;

string operator*(const string& s, int n) {
  string result = "";
  for (int i = 0; i < n; i++)
    result += s;
  return result;
}

template<typename T>
class Cell {
public:
  Cell(const T& value) : value_(value) {}
  T get_value() const;
  void set_value(const T& value);
  void make_double();
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

template<typename T>
void Cell<T>::make_double() {
  value_ = value_ * 2;
}

int main() {
  Cell<int> a(10);
  a.make_double();
  cout << a.get_value() << endl;

  string s = "JJ";
  Cell<string> b(s);
  b.make_double();
  cout << b.get_value() << endl;
}