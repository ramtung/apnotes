#include <iostream>
using namespace std;

int main()
{
	string name;
	cout << "Please enter your name: ";
	cin >> name;
	if (name == "Toby") {
		cerr << "You're a waste of life, and you should give up.\n";
		return 1;
	}
	cout << "Hello " << name << "\n";
	return 0;
}