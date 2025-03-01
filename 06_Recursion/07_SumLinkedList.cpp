#include <iostream>
#include <list>
using namespace std;

int sumList(list<int> aList) {
  if (aList.empty())
    return 0;
  int head = aList.front();
  aList.pop_front();
  return head + sumList(aList);
}

int main() {
  list<int> l {1, 4, 12, 3};
  cout << sumList(l) << endl;
}