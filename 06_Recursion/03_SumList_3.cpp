#include <iostream>
#include <vector>
using namespace std;

int sumList(const vector<int>& v, int i = 0) {
  if (i == v.size())
    return 0;
  return v[i] + sumList(v, i+1);
}

int main() {
  vector<int> a = {1, 4, 2, 3, 6};
  cout << "sum = " << sumList(a) << endl;
}