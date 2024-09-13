#include <iostream>
#include <vector>
#include <utility>
#include <cstdlib>
using namespace std;

const int SIZE = 2;
int DELTA_ROW[4] = {0, -1, 0, 1};
int DELTA_COL[4] = {-1, 0, 1, 0};

typedef vector<vector<int>> Board;

pair<int, int> find_empty_cell(const Board& board) {
	for (int row = 0; row < SIZE; row++) {
		for (int col = 0; col < SIZE; col++) {
			if (board[row][col] == 0)
				return make_pair(row, col);
		}
	}
	abort();
}

Board try_move(const Board& board, int move) {
	pair<int, int> empty = find_empty_cell(board);
	int dest_row = empty.first + DELTA_ROW[move];
	int dest_col = empty.second + DELTA_COL[move];

	if (dest_row < 0 || dest_row >= SIZE || dest_col < 0 || dest_col >= SIZE)
		return board;
	Board result = board;
	result[empty.first][empty.second] = result[dest_row][dest_col];
	result[dest_row][dest_col] = 0;
	return result;
}

void print_board(const Board& board) {
	for (int row = 0; row < SIZE; row++) {
		for (int col = 0; col < SIZE; col++) {
			if (board[row][col] == 0)
				cout << ' ';
			else
				cout << board[row][col];
			cout << ' ';
		}
		cout << endl;	
	}
	cout << endl;
}

bool is_solved(const Board& board) {
	int i = 0;
	for (int row = 0; row < SIZE; row++) {
		for (int col = 0; col < SIZE; col++) {
			if (board[row][col] == i)
				i++;
			else
				return false;
		}
	}
	return true;
}

bool contains(const vector<Board>& history, const Board& board) {
	for (int i = 0; i < history.size(); i++) {
		if (history[i] == board)
			return true;
	}
	return false;
}

bool solve(const Board& board, vector<Board>& history) {
	// print_board(board);
	// cin.get();

	history.push_back(board);
	if (is_solved(board)) {
		return true;
	}
	for (int move = 0; move < 4; move++) {
		Board next_board = try_move(board, move);
		if (contains(history, next_board))
			continue;
		// if (next_board == board)
		// 	continue;
		if (solve(next_board, history))
			return true;
	}
	history.pop_back();
	return false;
}

void print_solution(const vector<Board>& history) {
	for (int i = 0; i < history.size(); i++) {
		print_board(history[i]);
	}
}

int main() {
	Board b = {{3, 1}, {2, 0}};
	vector<Board> solution;
	if (solve(b, solution)) {
		cout << "Solved: " << endl;
		print_solution(solution);
	} else {
		cout << "Cannot be solved" << endl;
	}

}