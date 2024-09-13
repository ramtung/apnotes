#include <vector>
#include <iostream>
using namespace std;

int main() {
	vector<int> v = {1, 3, 6, 2};
	
	vector<int>::iterator it = v.begin();
	while (it != v.end()) {
		cout << *it << ' ';
		++it;
	}
	cout << endl;

	for (auto it2 = v.begin(); it2 != v.end(); it2++)
		cout << *it2 << ' ';
	cout << endl;
}
