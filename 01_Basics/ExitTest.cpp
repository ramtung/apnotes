#include <iostream>
using namespace std;

int main()
{
	string name;
	cout << "Please enter your name:";
	cin >> name;
	if (name == "Ramtin") {
		cout << "You're a very very bad person!\n";
		return 1;
	}
	cout << "Hello " << name << "\n";
	return 0;
}