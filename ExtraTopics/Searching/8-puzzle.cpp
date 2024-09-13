#include <iostream>
#include <vector>
#include <utility>
#include <cstdlib>
#include <ctime>
using namespace std;

int DELTA_COL[] = {-1, 0, 1, 0};
int DELTA_ROW[] = {0, -1, 0, 1};

typedef vector<vector<int>> Board;

pair<int, int> find_empty_cell(const Board& board) {
	for (int row = 0; row < board.size(); row++) {
		for (int col = 0; col < board.size(); col++) {
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

	if (dest_row < 0 || dest_row >= board.size() || dest_col < 0 || dest_col >= board.size())
		return board;
	Board result = board;
	result[empty.first][empty.second] = result[dest_row][dest_col];
	result[dest_row][dest_col] = 0;
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
}

bool contains(const vector<Board>& history, const Board& board) {
	for (int i = 0; i < history.size(); i++)
		if (history[i] == board)
			return true;
	return false;
}

bool is_solved(const Board& board) {
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
	// make 10 random moves from a solved puzzle:
	Board b = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
	for (int i = 0; i < 10; i++)
		b = try_move(b, rand() % 4);

	if (solve(b, history)) {
		cout << "Solved in " << history.size() << " moves" << endl;
		print_solution(history);
	} else {
		cout << "No Solution" << endl;
	}

}