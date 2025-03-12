#include <iostream>
#include <set>
#include <list>
using namespace std;

void printSet(const set<char>& s) {
  cout << '{';
  for (auto it = s.begin(); it != s.end(); ++it)
    cout << *it << (next(it) == s.end() ? "" : ", ");
  cout << "}\n";
}

void collectSubsets(set<char>::iterator first, 
                    set<char>::iterator last, 
                    list<set<char>>& result, 
                    set<char>& subset) {
  if (first == last) {
    result.push_back(subset);
    return;
  } 
  subset.insert(*first);
  collectSubsets(next(first), last, result, subset);
  subset.erase(*first);
  collectSubsets(next(first), last, result, subset);
}

void collectSubsets(set<char>::iterator first, 
                    set<char>::iterator last, 
                    list<set<char>>& result) {
  set<char> subset;
  collectSubsets(next(first), last, result, subset);
}

int main() {
  set<char> s {'A', 'B', 'C'};
  list<set<char>> result;
  collectSubsets(s.begin(), s.end(), result);
  for (auto s : result)
    printSet(s);
}