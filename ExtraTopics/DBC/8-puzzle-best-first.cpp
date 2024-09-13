#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <climits>
#include <algorithm>

using namespace std;

class Board {
public:
    Board(vector<vector<int>> init_board) : board(init_board) {
        // check if the board is square-shaped (does it really have to?)
        assert(board.size() > 0);
        for (int row = 0; row < board.size(); row++) {
            assert(board[row].size() == board.size());
        }
        // check if the board contains valid elements
        vector<int> elements;
        for (int row = 0; row < board.size(); row++) {
            for (int col = 0; col < board.size(); col++) {
                elements.push_back(board[row][col]);
            }
        }
        sort(elements.begin(), elements.end());
        for (int i = 0; i < elements.size(); i++) {
            assert(elements[i] == i);
        }
    }
    Board after_move(int move) {
        int DELTA_COL[] = {-1, 0, 1, 0};
        int DELTA_ROW[] = {0, -1, 0, 1};
        Board result = board;
        pair<int, int> empty = find_empty();
        int row = empty.first + DELTA_ROW[move];
        int col = empty.second + DELTA_COL[move];
        if (row < 0 || row >= board.size() || col < 0 || col >= board.size())
            return result;
        result.board[empty.first][empty.second] = result.board[row][col];
        result.board[row][col] = 0;
        return result;
    }

    bool equals(const Board& other) {
        return board == other.board;
    }

    void print() {
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

    int num_of_wrong_positions() {
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
private:
    vector<vector<int>> board;

    pair<int, int> find_empty() {
        for (int row = 0; row < board.size(); row++) {
            for (int col = 0; col < board.size(); col++) {
                if (board[row][col] == 0)
                    return make_pair(row, col);
            }
        }
        assert(false);  // cannot reach here if there is an empty cell in the board
    }
};

class PriorityQueue {
private:
    const int NO_INDEX = -1;
    struct State {
    public:
        int hamming_priority() {
            return num_of_moves + board.num_of_wrong_positions();
        }
        Board board;
        int num_of_moves;
        int prev_state_index;
        bool processed;
    };

    int min_priority_index() {
        assert(states.size() > 0);

        int min_index = -1;
        int min_priority = INT_MAX;
        for (int i = 0; i < states.size(); i++) {
            if (states[i].processed)
                continue;
            int priority = states[i].hamming_priority();
            if (priority < min_priority) {
                min_priority = priority;
                min_index = i;
            }
        }
        return min_index;
    }
    bool already_visited(const Board& board) {
        for (int i = 0; i < states.size(); i++)
            if (states[i].board.equals(board))
                return true;
        return false;
    }
    void explore(int current_state_index, int& solution_index) {
        states[current_state_index].processed = true;
        for (int move = 0; move < 4; move++) {
            Board next_board = states[current_state_index].board.after_move(move);
            if (already_visited(next_board))
                continue;
            states.push_back({next_board,
                              states[current_state_index].num_of_moves + 1,
                              current_state_index,
                              false});
            if (next_board.num_of_wrong_positions() == 0) {
                solution_index = states.size() - 1;
                return;
            }
        }
    }
private:
    vector<State> states;
};

void print_path_from_root(const vector<State>& states, int last_index, int& steps) {
	if (last_index == NO_INDEX) {
		steps = 0;
		return;
	}
	print_path_from_root(states, states[last_index].prev_state_index, steps);
	states[last_index].board.print();
	steps++;
}

void solve(Board initial_board) {
	vector<State> states = {{initial_board, 0, NO_INDEX, false}};
	int solution_index = NO_INDEX;
	while (solution_index == NO_INDEX) {
		explore(states, min_priority_index(states), solution_index);
	}
	int steps = 0;
	print_path_from_root(states, solution_index, steps);
	cout << "Solved in " << steps << " steps." << endl;
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

Board random_board() {
	unsigned seed = time(0);
	cout << "seed=" << seed << endl;
	srand(seed);

	Board board = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
	for (int i = 0; i < 10; i++)	// make 10 random moves
		board = make_move(board, rand() % 4);
	return board;
}

int main() {
	// Board board = random_board();
	Board board = {{1, 2, 5}, {3, 4, 8}, {6, 7, 0}};

	solve(board);
}
