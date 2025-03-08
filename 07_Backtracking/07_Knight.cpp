#include <iostream>
using namespace std;

const int ROW_COUNT = 7;
const int COL_COUNT = 7;
const int POSSIBLE_MOVES = 8;

int rowDelta[POSSIBLE_MOVES] = {2, 1, -1, -2, -2, -1, 1, 2};
int colDelta[POSSIBLE_MOVES] = {-1, -2, -2, -1, 1, 2, 2, 1};

struct Solution {
  int board[ROW_COUNT][COL_COUNT];
  int currentRow;
  int currentCol;
  int moveNo;
};

void initState(Solution& solution, int initRow, int initCol) {
  for (int row = 0; row < ROW_COUNT; row++)
    for (int col = 0; col < COL_COUNT; col++)
      solution.board[row][col] = 0;
    
  solution.currentRow = initRow;
  solution.currentCol = initCol;
  solution.moveNo = 1;
  solution.board[initRow][initCol] = 1;
}

void printSolution(const Solution& solution) {
  cout << solution.moveNo << endl;
  for (int i = 0; i < ROW_COUNT; i++) {
    for (int j = 0; j < COL_COUNT; j++) {
      if (solution.board[i][j] < 10)
        cout << ' ';
      cout << solution.board[i][j] << ' ';
    }
    cout << endl;
  }
  cin.get();
}

bool canMove(const Solution& solution, int moveIdx) {
  int newRow = solution.currentRow + rowDelta[moveIdx];
  int newCol = solution.currentCol + colDelta[moveIdx];
  return (newRow >= 0) && (newRow < ROW_COUNT) && 
         (newCol >= 0) && (newCol < COL_COUNT) &&
         solution.board[newRow][newCol] == 0;         
}

void doMove(Solution& solution, int moveIdx) {
  solution.currentRow += rowDelta[moveIdx];
  solution.currentCol += colDelta[moveIdx];
  solution.moveNo++;
  solution.board[solution.currentRow][solution.currentCol] = solution.moveNo;
}

void undoMove(Solution& solution, int moveIdx) {
  solution.board[solution.currentRow][solution.currentCol] = 0;
  solution.currentRow -= rowDelta[moveIdx];
  solution.currentCol -= colDelta[moveIdx];
  solution.moveNo--;
}

bool findTour(Solution& solution) {
  // uncomment the following two lines for debugging:
  // printSolution(solution);
  
  if (solution.moveNo == ROW_COUNT * COL_COUNT)
    return true;
    
  for (int moveIdx = 0; moveIdx < POSSIBLE_MOVES; moveIdx++) {     
    if (!canMove(solution, moveIdx))
      continue;
    doMove(solution, moveIdx);      
    if (findTour(solution))
      return true;
    undoMove(solution, moveIdx);
  }
  return false;
}

void solve(int initRow, int initCol) {
  Solution solution;
  initState(solution, initRow, initCol);
  if (findTour(solution))
    printSolution(solution);
  else
    cout << "Failed to find a tour!\n";
}

int main() {
  solve(3, 3);
}