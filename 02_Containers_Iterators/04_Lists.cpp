#include <list>
#include <iostream>
using namespace std;

int main() {
	list<int> l = {1, 3, 6, 2};
	
	list<int>::iterator it = l.begin();
	while (it != l.end()) {
		cout << *it << ' ';
		++it;
	}
	cout << endl;

	l.push_front(12);
	for (auto it2 = l.begin(); it2 != l.end(); it2++)
		cout << *it2 << ' ';
	cout << endl;

}
