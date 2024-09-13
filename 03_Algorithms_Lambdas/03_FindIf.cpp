#include <iostream>
#include <string>
#include <list>
#include <algorithm>
using namespace std;

int main() {
	list<string> l = {"Gholi", "aroosi", "naraft!"};

	auto it = find_if(l.begin(), l.end(), [](string s){ return s.length() % 2 == 1; });
	if (it != l.end())
		cout << *it << endl;
}