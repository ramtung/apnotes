// Print the number of N-Queen solutions for increasing values of N

#include <iostream>
#include <cmath>
using namespace std;

int size;
int queen_col_in_row[100];

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
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++)
            cout << (col == queen_col_in_row[row] ? "QQ" : "..");
        cout << endl;
    }
    cin.get();
}

void solve(int row, int& solutions_count) {
    if (row == size) {
        // print_board();
		// cout << solutions_count << endl;
		solutions_count++;
		return;
	}
        
    for (int col = 0; col < size; col++) {
        if (safe_to_put_at(row, col)) {
            queen_col_in_row[row] = col;
			solve(row + 1, solutions_count);
            queen_col_in_row[row] = -1;
        }
    }
}

int main() {
	size = 1;
	while (true) {
		cout << "Solutions for size=" << size << ": ";
	    for (int row = 0; row < size; row++)
	        queen_col_in_row[row] = -1;
		int count = 0;
		solve(0, count);
		cout << count << endl;
		size++;
	}
}





