#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	int age;
	cout << "Please enter your name followed by your age: ";
	cin >> name >> age;
	cout << "Hello " << name << "!\n";
	cout << "Your age is " << age << endl;
}