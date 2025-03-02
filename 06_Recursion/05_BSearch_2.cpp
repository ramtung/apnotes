#include <iostream>
#include <vector>
using namespace std;

int bsearch(vector<double> v, int from, int to, double value) {
  if (from > to)
    return -1;

  int mid = (from + to) / 2;
  if (v[mid] == value)
    return mid;
  else if (v[mid] < value)
    return bsearch(v, mid+1, to, value);
  else
    return bsearch(v, from, mid-1, value);
}

int binarySearch(vector<double> v, double value) {
  return bsearch(v, 0, v.size()-1, value);
}

int main() {
  vector<double> v {1, 3, 5, 7, 9, 11, 13, 15};
  int target = 7;

  int idx = binarySearch(v, target);
  
  if (idx == -1)
    cout << "Did not found " << target << endl;
  else
    cout << "Found " << target << " at index " << idx << endl;
