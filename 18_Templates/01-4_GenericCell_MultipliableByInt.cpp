#include <iostream>
#include <string>
#include <concepts>
using namespace std;

template<typename T>
concept MultipliableByInt = 
  requires(const T& x, int n) {
    { x * n } -> same_as<T>;
  };

template<MultipliableByInt T>
class Cell {
public:
  Cell(const T& value) : value_(value) {}
  T get_value() const;
  void set_value(const T& value);
  void make_double();
private:
  T value_;
};

template<MultipliableByInt T>
T Cell<T>::get_value() const {
  return value_;
}

template<MultipliableByInt T>
void Cell<T>::set_value(const T& value) {
  value_ = value;
}

template<MultipliableByInt T>
void Cell<T>::make_double() {
  value_ = value_ * 2;
}

string operator*(const string& s, int n) {
  string result = "";
  for (int i = 0; i < n; i++)
    result += s;
  return result;
}

int main() {
  Cell<int> a(10);
  a.set_value(12);
  a.make_double();
  cout << a.get_value() << endl;

  // Has compile error, even though operator* is overloaded
  // string s = "JJ";
  // Cell<string> b(s);
}