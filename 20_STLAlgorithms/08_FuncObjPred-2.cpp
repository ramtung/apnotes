#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class GreaterThan {
public:
  GreaterThan(int n) { n_ = n; }
  bool operator()(int a) { return a > n_; }
private:
  int n_;
};

int main() {
  vector<int> v {10, 123, 87};
  int limit;
  cin >> limit;

  vector<int>::iterator it;
  it = find_if(v.begin(), v.end(), GreaterThan(limit));
  it = find_if(v.begin(), v.end(), [limit](int a) { return a > limit; });
}