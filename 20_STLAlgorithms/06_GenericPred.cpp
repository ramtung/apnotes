#include <iostream>
#include <vector>
using namespace std;

template<typename I, typename P>
I FindIf(I first, I last, P pred) {
  while (first != last && !pred(*first)) 
    ++first;
  return first; 
}

bool odd(int x) { return x % 2; }

int main() {
  vector<int> v {10, 123, 87};

  auto it = FindIf(v.begin(), v.end(), odd);
  cout << *it << endl;
}