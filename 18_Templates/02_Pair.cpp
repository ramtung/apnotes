#include <iostream>
#include <string>
using namespace std;

template<typename U, typename V> 
class Pair {
public:
  Pair(U first, V second) : first_(first), second_(second) {}
  U first() { return first_; }
  V second() { return second_; }
private:
  U first_;
  V second_;
};

int main() {
  Pair<string, double> record("gholam", 11.4);
  cout << record.first();
}