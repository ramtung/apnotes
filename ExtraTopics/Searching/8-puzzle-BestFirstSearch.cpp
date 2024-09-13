#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <climits>
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

int num_of_wrong_positions(const Board& board) {
	int wrongs = 0;
	for (int row = 0; row < board.size(); row++) {
		for (int col = 0; col < board.size(); col++) {
			if (board[row][col] == 0)
				continue;
			if (board[row][col] != row * board.size() + col)
				wrongs++;
		}
	}
	return wrongs;
}

const int NO_INDEX = -1;
struct State {
	Board board;
	int num_of_moves;
	int prev_state_index;
	bool processed;
};

int hamming_priority(const State& state) {
	return state.num_of_moves + num_of_wrong_positions(state.board);
}

int min_priority_index(const vector<State>& states) {
	assert(states.size() > 0);

	int min_index = -1;
	int min_priority = INT_MAX;
	for (int i = 0; i < states.size(); i++) {
		if (states[i].processed)
			continue;
		int priority = hamming_priority(states[i]);
		if (priority < min_priority) {
			min_priority = priority;
			min_index = i;
		}
	}
	return min_index;
}

bool already_visited(const vector<State>& states, const Board& board) {
	for (int i = 0; i < states.size(); i++)
		if (states[i].board == board)
			return true;
	return false;
}

void explore(vector<State>& states, int current_state_index, int& solution_index) {
	states[current_state_index].processed = true;
	for (int move = 0; move < 4; move++) {
		Board next_board = make_move(states[current_state_index].board, move);
		if (already_visited(states, next_board))
			continue;
		states.push_back(
			{
				next_board, 
				states[current_state_index].num_of_moves + 1, 
				current_state_index,
				false
			});
		if (num_of_wrong_positions(next_board) == 0) {
			solution_index = states.size() - 1;
			return;
		}
	}
}

void print_path_from_root(const vector<State>& states, int last_index) {
	if (last_index == NO_INDEX)
		return;
	print_path_from_root(states, states[last_index].prev_state_index);
	print_board(states[last_index].board);
}

void solve(Board initial_board) {
	vector<State> states = {{initial_board, 0, NO_INDEX, false}};
	int solution_index = NO_INDEX;
	while (solution_index == NO_INDEX) {
		explore(states, min_priority_index(states), solution_index);
	}
	print_path_from_root(states, solution_index);
}

void test_num_of_wrong_positions() {
	assert(num_of_wrong_positions({{0, 1, 2}, {3, 4, 5}, {6, 7, 8}}) == 0);
	assert(num_of_wrong_positions({{1, 0, 2}, {3, 4, 5}, {6, 7, 8}}) == 1);
	assert(num_of_wrong_positions({{1, 3, 8}, {2, 0, 6}, {5, 9, 7}}) == 8);
}

void test_min_priority_index() {
	assert(min_priority_index({
		{{{0, 1, 2}, {3, 4, 5}, {6, 7, 8}}, 10, NO_INDEX, false},
		{{{1, 0, 2}, {3, 4, 5}, {6, 7, 8}}, 7, NO_INDEX, false},
		{{{1, 3, 8}, {2, 0, 6}, {5, 9, 7}}, 2, NO_INDEX, false}
	}) == 1);

	assert(min_priority_index({
		{{{0, 1, 2}, {3, 4, 5}, {6, 7, 8}}, 5, NO_INDEX, false},
		{{{1, 0, 2}, {3, 4, 5}, {6, 7, 8}}, 7, NO_INDEX, false},
		{{{1, 3, 8}, {2, 0, 6}, {5, 9, 7}}, 2, NO_INDEX, false}
	}) == 0);

	assert(min_priority_index({
		{{{0, 1, 2}, {3, 4, 5}, {6, 7, 8}}, 5, NO_INDEX, true},
		{{{1, 0, 2}, {3, 4, 5}, {6, 7, 8}}, 7, NO_INDEX, false},
		{{{1, 3, 8}, {2, 0, 6}, {5, 9, 7}}, 2, NO_INDEX, false}
	}) == 1);

}

int main() {
	unsigned seed = time(0);
	cout << "seed=" << seed << endl;
	srand(seed);

	Board b = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
	for (int i = 0; i < 100; i++)
		b = make_move(b, rand() % 4);

	solve(b);
}
