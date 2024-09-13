#include <iostream>
using namespace std;

inline int make_double(int x) {
	return 2 * x;
}

int main() {
	int y;
	cin >> y;

	int z = make_double(y);
	cout << z;

	return 0;
}