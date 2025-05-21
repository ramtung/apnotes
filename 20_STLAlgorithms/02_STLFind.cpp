#include <iostream>
#include <vector>
using namespace std;

template<typename I, typename T>
I find(I first, I last, const T& val) {
  while (first!=last && *first != val) 
    ++first;
  return first; 
}

int main() {
  vector<int> v {10, 123, 87};
  auto p = find(v.begin(), v.end(), 123);
  if (p != v.end())
    cout << "Found " << *p << endl;
  else
    cout << "Not found" << endl;

  double nums[] {1.4, 50.1, 3.5};
  auto r = find(nums, nums + 3, 50.1);
  if (r != nums + 3)
    cout << "Found " << *r << endl;
  else
    cout << "Not found" << endl;
}