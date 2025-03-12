#include <iostream>
#include <list>
#include <set>
using namespace std;

void printSet(const set<char>& s) {
  cout << '{';
  for (auto it = s.begin(); it != s.end(); ++it)
    cout << *it 
         << (next(it) == s.end() ? "" : ", ");
  cout << "}\n";
}

list<set<char>> subsets(set<char> s) {
  if (s.empty()) {
    return {{}}; // a list containing an empty set
  }
  char first = *s.begin();
  s.erase(first);
  list<set<char>> subsetsOfRest = subsets(s);
  list<set<char>> result = subsetsOfRest;
  for (set<char> subset : subsetsOfRest) {
    subset.insert(first);
    result.push_back(subset);
  }
  return result;
}

int main() {
  set<char> s {'A', 'B', 'C'};
  list<set<char>> allSubsets = subsets(s);

  for (auto subset : allSubsets)
    printSet(subset);
}