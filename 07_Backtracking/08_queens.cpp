#include <iostream>
#include <cmath>
using namespace std;

const int SIZE = 8;

int queen_col_in_row[SIZE]; // 0 2 4 ...
// queen_col_in_row[i] : the column in row i in which we put the queen

bool threat(int r1, int c1, int r2, int c2) {
    return (r1 == r2 || c1 == c2 || abs(r1 - r2) == abs(c1 - c2));
}

bool safe_to_put_at(int row, int col) {
    for (int prev_row = 0; prev_row < row; prev_row++)
        if (threat(row, col, prev_row, queen_col_in_row[prev_row]))
            return false;
    return true;
}

void print_board() {
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++)
            cout << (col == queen_col_in_row[row] ? "QQ" : "..");
        cout << endl;
    }
    cin.get();
}

bool solve(int row) {
    // uncomment the following two lines for debugging:
    cout << row << endl;
    print_board();

    if (row == SIZE)
        return true;
        
    for (int col = 0; col < SIZE; col++) {
        if (safe_to_put_at(row, col)) {
            queen_col_in_row[row] = col;
            if (solve(row + 1))
                return true;
            queen_col_in_row[row] = -1;
        }
    }
    return false;
}

int main() {
    for (int row = 0; row < SIZE; row++)
        queen_col_in_row[row] = -1;
    if (solve(0))
        print_board();
}