#include <iostream>
#include <cstdlib>
using namespace std;

const int SIZE = 8;
typedef int Solution[SIZE];
// solution[i] : the column at which the queen in row i is put

bool controls(int r1, int c1, int r2, int c2) {
  return (r1 == r2 || c1 == c2 || abs(r1 - r2) == abs(c1 - c2));
}

bool safeToPutAt(Solution solution, int row, int col) {
  for (int prevRow = 0; prevRow < row; prevRow++)
    if (controls(row, col, prevRow, solution[prevRow]))
      return false;
  return true;
}

void printSolution(Solution solution) {
  for (int row = 0; row < SIZE; row++) {
    for (int col = 0; col < SIZE; col++)
      cout << (col == solution[row] ? "QQ" : "..");
    cout << endl;
  }
  cin.get();
}

bool solve(Solution& solution, int row) {
  // uncomment the following for debugging:
  // printSolution(solution);

  if (row == SIZE)
    return true;
    
  for (int col = 0; col < SIZE; col++) {
    if (safeToPutAt(solution, row, col)) {
      solution[row] = col;
      if (solve(solution, row + 1))
        return true;
      solution[row] = -1;
    }
  }
  return false;
}

int main() {
  Solution solution;
  for (int row = 0; row < SIZE; row++)
    solution[row] = -1;
  if (solve(solution, 0))
    printSolution(solution);
}