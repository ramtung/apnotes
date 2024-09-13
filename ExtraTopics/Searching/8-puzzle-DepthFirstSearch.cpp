#include <iostream>
#include <vector>
#include <utility>
#include <cstdlib>
#include <ctime>
using namespace std;

int DELTA_COL[] = {-1, 0, 1, 0};
int DELTA_ROW[] = {0, -1, 0, 1};

typedef vector<vector<int>> Board;

pair<int, int> find_empty(const Board& board) {
	for (int row = 0; row < board.size(); row++) {
		for (int col = 0; col < board.size(); col++) {
			if (board[row][col] == 0)
				return make_pair(row, col);
		}
	}
	abort();
}

Board make_move(const Board& board, int move) {
	Board result = board;
	pair<int, int> empty = find_empty(board);
	int row = empty.first + DELTA_ROW[move];
	int col = empty.second + DELTA_COL[move];
	if (row < 0 || row >= board.size() || col < 0 || col >= board.size())
		return result;
	result[empty.first][empty.second] = result[row][col];
	result[row][col] = 0;
	return result;
}

void print_board(const Board& board) {
	for (int row = 0; row < board.size(); row++) {
		for (int col = 0; col < board.size(); col++) {
			if (board[row][col])
				cout << board[row][col];
			else
				cout << ' ';
			cout << ' ';
		}
		cout << endl;
	}
	cout << endl;
}

bool contains(const vector<Board>& history, const Board& board) {
	for (int i = 0; i < history.size(); i++)
		if (history[i] == board)
			return true;
	return false;
}

bool ordered(const Board& board) {
	int i = 0;
	for (int row = 0; row < board.size(); row++) {
		for (int col = 0; col < board.size(); col++) {
			if (board[row][col] == i)
				i++;
			else
				return false;
		}
	}
	return true;
}

bool solve(const Board& board, vector<Board>& history) {
	if (ordered(board)) {
		history.push_back(board);
		return true;
	}
	history.push_back(board);
	for (int move = 0; move < 4; move++) {
		Board next_board = make_move(board, move);
		if (contains(history, next_board))
			continue;
		if (solve(next_board, history))
			return true;
	}
	history.pop_back();
	return false;
}

void print_solution(const vector<Board>& history) {
	for (int i = 0; i < history.size(); i++) {
		print_board(history[i]);
		cout << endl;
	}
}

int main() {
	unsigned seed = time(0);
	cout << "seed=" << seed << endl;
	srand(seed);

	vector<Board> history;
	// Board b = {{1, 2, 3}, {4, 5, 6}, {8, 7, 0}};
	Board b = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
	for (int i = 0; i < 100; i++)
		b = make_move(b, rand() % 4);

	print_board(b);
	cout << endl;

	if (solve(b, history)) {
		cout << "Solved in " << history.size() << " moves" << endl;
		// print_solution(history);
	} else {
		cout << "No Solution" << endl;
	}

}