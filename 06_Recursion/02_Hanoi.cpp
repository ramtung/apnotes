#include <iostream>
#include <vector>
#include <map>
using namespace std;

typedef vector<int> Peg;
typedef char Label;
typedef map<Label, Peg> Hanoi;

void printPeg(const Peg& peg) {
  for (int disc: peg)
    cout << disc << ' ';
  cout << '\n';
}

void printHanoi(const Hanoi& hanoi) {
  for (auto [label, peg] : hanoi) {
    cout << label << ": ";
    printPeg(peg);    
  }
  cout << '\n';
}

void move(Peg& from, Peg& to) {
  to.push_back(from.back());
  from.pop_back();
}

void solve(Hanoi& hanoi, Label from, Label to, Label _using, int n) {
  if (n == 1) {
    move(hanoi[from], hanoi[to]);
    printHanoi(hanoi);
  } else {
    solve(hanoi, from, _using, to, n-1);
    move(hanoi[from], hanoi[to]);
    printHanoi(hanoi);
    solve(hanoi, _using, to, from, n-1);
  }   
}

int main() {
  int n;
  cout << "How many discs? ";
  cin >> n;

  Hanoi hanoi {{'A', {}}, {'B', {}}, {'C', {}}};
  for (int i = n; i >= 1; i--)
    hanoi['A'].push_back(i);

  printHanoi(hanoi);
  solve(hanoi, 'A', 'B', 'C', n);
}