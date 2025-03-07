#include <iostream>
#include <cstdlib>
using namespace std;

const int SIZE = 8;
typedef int State[SIZE];
// state[i] : the column at which the queen in row i is put

bool threat(int r1, int c1, int r2, int c2) {
  return (r1 == r2 || c1 == c2 || abs(r1 - r2) == abs(c1 - c2));
}

bool safeToPutAt(State state, int row, int col) {
  for (int prevRow = 0; prevRow < row; prevRow++)
    if (threat(row, col, prevRow, state[prevRow]))
      return false;
  return true;
}

void printState(State state) {
  for (int row = 0; row < SIZE; row++) {
    for (int col = 0; col < SIZE; col++)
      cout << (col == state[row] ? "QQ" : "..");
    cout << endl;
  }
  cin.get();
}

void solveAll(State& state, int row) {
  if (row == SIZE)
    printState(state);
    
  for (int col = 0; col < SIZE; col++) {
    if (safeToPutAt(state, row, col)) {
      state[row] = col;
      solveAll(state, row + 1);
      state[row] = -1;
    }
  }
}

int main() {
  State state;
  for (int row = 0; row < SIZE; row++)
    state[row] = -1;
  solveAll(state, 0);
}