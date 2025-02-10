#include <iostream>
#include <string>
#include <list>
#include <algorithm>
using namespace std;

void printString(string s) {
  cout << s << ' ';
}

int main() {
	list<string> l = {"Gholi", "aroosi", "naraft!"};

	for_each(l.begin(), l.end(), printString);
  
	for_each(l.begin(), l.end(), [](string s){ cout << s << ' '; });
}