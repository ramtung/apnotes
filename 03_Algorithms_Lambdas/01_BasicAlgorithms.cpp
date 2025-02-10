#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v = {1, 3, 2, 6, 12, 8};
	list<string> l = {"Gholi", "aroosi", "naraft!"};

	vector<int>::iterator it = find(v.begin(), v.end(), 6);
	if (it != v.end())
		cout << "found!" << endl;

	if (find(l.begin(), l.end(), "Gholi") != l.end())
		cout << "found!" << endl;

	// The following line causes a compile error! How can we fix it?
	// replace(l.begin(), l.end(), "Gholi", "Shahpar");
	
	for (auto it = l.begin(); it != l.end(); it++)
		cout << *it << ' ';
}