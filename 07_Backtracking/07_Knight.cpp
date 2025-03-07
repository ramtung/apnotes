#include <iostream>
using namespace std;

const int ROW_COUNT = 7;
const int COL_COUNT = 7;
const int POSSIBLE_MOVES = 8;

int rowDelta[POSSIBLE_MOVES] = {2, 1, -1, -2, -2, -1, 1, 2};
int colDelta[POSSIBLE_MOVES] = {-1, -2, -2, -1, 1, 2, 2, 1};

struct State {
  int board[ROW_COUNT][COL_COUNT];
  int currentRow;
  int currentCol;
  int moveNo;
};

void initState(State& state, int initRow, int initCol) {
  for (int row = 0; row < ROW_COUNT; row++)
    for (int col = 0; col < COL_COUNT; col++)
      state.board[row][col] = 0;
    
  state.currentRow = initRow;
  state.currentCol = initCol;
  state.moveNo = 1;
  state.board[initRow][initCol] = 1;
}

void printState(const State& state) {
  cout << state.moveNo << endl;
  for (int i = 0; i < ROW_COUNT; i++) {
    for (int j = 0; j < COL_COUNT; j++) {
      if (state.board[i][j] < 10)
        cout << ' ';
      cout << state.board[i][j] << ' ';
    }
    cout << endl;
  }
  cin.get();
}

bool canMove(const State& state, int moveIdx) {
  int newRow = state.currentRow + rowDelta[moveIdx];
  int newCol = state.currentCol + colDelta[moveIdx];
  return (newRow >= 0) && (newRow < ROW_COUNT) && 
         (newCol >= 0) && (newCol < COL_COUNT) &&
         state.board[newRow][newCol] == 0;         
}

void doMove(State& state, int moveIdx) {
  state.currentRow += rowDelta[moveIdx];
  state.currentCol += colDelta[moveIdx];
  state.moveNo++;
  state.board[state.currentRow][state.currentCol] = state.moveNo;
}

void undoMove(State& state, int moveIdx) {
  state.board[state.currentRow][state.currentCol] = 0;
  state.currentRow -= rowDelta[moveIdx];
  state.currentCol -= colDelta[moveIdx];
  state.moveNo--;
}

bool findTour(State& state) {
  // uncomment the following two lines for debugging:
  // printState(state);
  
  if (state.moveNo == ROW_COUNT * COL_COUNT)
    return true;
    
  for (int moveIdx = 0; moveIdx < POSSIBLE_MOVES; moveIdx++) {     
    if (!canMove(state, moveIdx))
      continue;
    doMove(state, moveIdx);      
    if (findTour(state))
      return true;
    undoMove(state, moveIdx);
  }
  return false;
}

void solve(int initRow, int initCol) {
  State state;
  initState(state, initRow, initCol);
  if (findTour(state))
    printState(state);
  else
    cout << "Failed to find a tour!\n";
}

int main() {
  solve(3, 3);
}