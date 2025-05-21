#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;

void print_vector(vector<int> v) {
  vector<int>::iterator it = v.begin();
  while (it != v.end()) {
    cout << *it << ' ';
    ++it;
  }
}

template<typename Container>
void print(const Container& c) {
  auto it = c.begin();
  while (it != c.end()) {
    cout << *it << ' ';
    ++it;
  }
  cout << endl;
}

template<typename Iterator>
void print2(Iterator first, Iterator last) {
  Iterator it = first;
  while (it != last) {
    cout << *it << ' ';
    ++it;
  }
  cout << endl;
}

int main() {
  vector<int> v {10, 123, 87};
  list<string> w {"Gholi", "aroosi", "naraft!"};

  print_vector(v);

  print(v);
  print(w);

  print2(v.begin(), v.end());
  print2(w.begin(), w.end());
}