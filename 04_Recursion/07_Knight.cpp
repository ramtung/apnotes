#include <iostream>
using namespace std;

const int ROW_COUNT = 6;
const int COL_COUNT = 6;
const int POSSIBLE_MOVES = 8;

int row_delta[POSSIBLE_MOVES] = {2, 1, -1, -2, -2, -1, 1, 2};
int col_delta[POSSIBLE_MOVES] = {-1, -2, -2, -1, 1, 2, 2, 1};

int board[ROW_COUNT][COL_COUNT];

void print_board() {
    for (int i = 0; i < ROW_COUNT; i++) {
        for (int j = 0; j < COL_COUNT; j++) {
            if (board[i][j] < 10)
                cout << ' ';
            cout << board[i][j] << ' ';
        }
        cout << endl;
    }
    cin.get();
}

bool find_tour(int move_no, int current_row, int current_col) {
    // uncomment the following two lines for debugging:
    //cout << move_no << endl;
    // print_board();
    
    if (move_no == ROW_COUNT * COL_COUNT)
        return true;
        
    for (int move = 0; move < POSSIBLE_MOVES; move++) {
        int new_row = current_row + row_delta[move];
        int new_col = current_col + col_delta[move];
        
        if (new_row < 0 || new_row >= ROW_COUNT || new_col < 0 || new_col >= COL_COUNT)
            continue;
            
        if (board[new_row][new_col] != 0)
            continue;
            
        board[new_row][new_col] = move_no + 1;
        if (find_tour(move_no + 1, new_row, new_col))
            return true;
        board[new_row][new_col] = 0;
    }
    return false;
}

void solve(int init_row, int init_col) {
    for (int row = 0; row < ROW_COUNT; row++)
        for (int col = 0; col < COL_COUNT; col++)
            board[row][col] = 0;
        
    board[init_row][init_col] = 1;
    if (find_tour(1, init_row, init_col))
        print_board();
    else
        cout << "Failed to find a tour!\n";
}

int main() {
    solve(3, 3);
}