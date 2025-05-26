#include <iostream>
#include <vector>
using namespace std;

template<class It, class P>
It FindIf(It first, It last, P pred) {
  while (first!=last && !pred(*first)) 
    ++first;
  return first; 
}

bool odd(int x) { return x % 2; }

class IsOdd {
public:
  bool operator()(int x) {
    return x % 2;
  }
};

int main() {
  IsOdd i;
  cout << i(5)
       << i.operator()(5)
       << endl;
       
  vector<int> v {10, 123, 87};

  auto it = FindIf(v.begin(), v.end(), IsOdd());
  cout << *it << endl;
}