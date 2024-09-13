#include <iostream>
#include <string>
#include <list>
#include <algorithm>
using namespace std;

int main() {
	list<string> l = {"Gholi", "aroosi", "naraft!"};

	replace(l.begin(), l.end(), string("Gholi"), string("Shahpar"));
	
	for_each(l.begin(), l.end(), [](string s){ cout << s << ' '; });

	// for (auto it = l.begin(); it != l.end(); it++)
	// 	cout << *it << ' ';
}