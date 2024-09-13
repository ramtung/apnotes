#include <iostream>
#include <string>
using namespace std;

// decalaration:
string reverse(string s);
string toUpper(string s);
int toInteger(string s);

int main() {
	cout << reverse("hello") << endl;
	cout << toUpper("Ramtin") << endl;
	cout << toInteger("124") << endl;
}

// definition:
string reverse(string s) {
	if (s.length() < 2)
		return s;
	return reverse(s.substr(1)) + s[0];
}

string toUpper(string s) {
	string result = s;
	for (int i = 0; i < s.length(); i++)
		result[i] = toupper(s[i]);
	return result;
}

int toInteger(string s) {
	if (s.length() == 0)
		return 0;
	return (s[s.length()-1]-'0') + 10 * toInteger(s.substr(0, s.length()-1));
}
