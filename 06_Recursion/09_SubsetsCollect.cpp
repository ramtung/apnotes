#include <iostream>
#include <set>
#include <list>
using namespace std;

void print(const set<char>& s) {
  cout << '{';
  for (auto it = s.begin(); it != s.end(); ++it)
    cout << *it << (next(it) == s.end() ? "" : ", ");
  cout << "}\n";
}

void collectSubsets(set<char>::iterator first, set<char>::iterator last, list<set<char>>& subsets, set<char>& subset) {
  if (first == last) {
    subsets.push_back(subset);
    return;
  }
  
  subset.insert(*first);
  collectSubsets(next(first), last, subsets, subset);
  subset.erase(*first);
  collectSubsets(next(first), last, subsets, subset);
}

int main() {
  set<char> s {'A', 'B', 'C'};
  set<char> subset;
  list<set<char>> subsets;
  collectSubsets(s.begin(), s.end(), subsets, subset);
  for (auto s : subsets) {
    print(s);
  }
}