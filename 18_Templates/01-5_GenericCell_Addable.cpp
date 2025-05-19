#include <iostream>
#include <string>
#include <concepts>
using namespace std;

template<typename T>
concept Addable = 
  requires(const T& x, const T& y) {
    { x + y } -> same_as<T>;
  };

template<Addable T>
class Cell {
public:
  Cell(const T& value) : value_(value) {}
  T get_value() const;
  void set_value(const T& value);
  void make_double();
private:
  T value_;
};

template<Addable T>
T Cell<T>::get_value() const {
  return value_;
}

template<Addable T>
void Cell<T>::set_value(const T& value) {
  value_ = value;
}

template<Addable T>
void Cell<T>::make_double() {
  value_ = value_ + value_;
}


int main() {
  Cell<int> a(10);
  a.set_value(12);
  cout << a.get_value() << endl;

  string s = "JJ";
  string t = "UU";
  Cell<string> b(s);
  b.set_value(t);
  b.make_double();
  cout << b.get_value() << endl;
}