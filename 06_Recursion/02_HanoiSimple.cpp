#include <iostream>
using namespace std;

void solve(char from, char to, char _using, int n) {
  if (n == 1) {
    cout << from << " -> " << to << endl;
  } else {
    solve(from, _using, to, n-1);
    cout << from << " -> " << to << endl;
    solve(_using, to, from, n-1);
  }   
}

int main() {
  int n;
  cout << "How many discs? ";
  cin >> n;

  solve('A', 'B', 'C', n);
}