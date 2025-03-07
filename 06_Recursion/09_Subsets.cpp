#include <iostream>
#include <set>
using namespace std;

void print(const set<char>& s) {
  cout << '{';
  for (auto it = s.begin(); it != s.end(); ++it)
    cout << *it 
         << (next(it) == s.end() ? "" : ", ");
  cout << "}\n";
}

void printSubsets(set<char>::iterator first, 
                  set<char>::iterator last, 
                  set<char>& subset) {
  if (first == last) {
    print(subset);
    return;
  }
  
  subset.insert(*first);
  printSubsets(next(first), last, subset);
  subset.erase(*first);
  printSubsets(next(first), last, subset);
}

int main() {
  set<char> s {'A', 'B', 'C'};
  set<char> subset;
  printSubsets(s.begin(), s.end(), subset);
}