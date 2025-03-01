#include <iostream>
#include <list>
using namespace std;

int sumList(list<int>::iterator first, 
            list<int>::iterator last) {
  if (first == last)
    return 0;
  int head = *first;
  ++first;
  return head + sumList(first, last);
}

int main() {
  list<int> l {1, 4, 12, 3};
  cout << sumList(l.begin(), l.end()) << endl;
}