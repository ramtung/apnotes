#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;

template <class I, class T>
T accumulate(I first, I last, T init) {
  for (; first != last; ++first)
    init = init + *first;
  return init;
}
 
int main() {
  vector<int> v {10, 123, 87};  
  cout << accumulate(v.begin(), v.end(), 0) 
       << endl;
  
  list<string> w {"Gholi", "aroosi", "naraft!"};
  cout << accumulate(w.begin(), w.end(), string("")) 
       << endl;
}