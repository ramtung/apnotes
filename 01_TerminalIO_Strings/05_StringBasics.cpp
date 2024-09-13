#include <iostream>
#include <string>
using namespace std;

int main() {
	string s = "abcdef";
	cout << s.length() << endl;
	cout << s[2] << endl;
	
	cout << s.substr(1, 2) << endl;
	cout << s.substr(1) << endl;

	cout << s.find('c') << endl;
	if (s.find('D') == string::npos)
		cout << "Not found!" << endl;

	return 0;
}