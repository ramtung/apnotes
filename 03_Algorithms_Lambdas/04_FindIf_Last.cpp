#include <iostream>
#include <string>
#include <list>
#include <algorithm>
using namespace std;

int main() {
	list<string> l = {"Gholi", "aroosi", "naraft!"};

	auto it = find_if(l.rbegin(), l.rend(), [](string s){ return s.length() % 2 == 1; });
	if (it != l.rend())
		cout << *it << endl;
}