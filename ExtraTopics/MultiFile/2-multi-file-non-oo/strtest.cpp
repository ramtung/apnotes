#include <iostream>
#include "strutil.hpp"
using namespace std;

int main() {
	cout << "Hello!" << endl;
	cout << reverse("hello") << endl;
	cout << toUpper("Ramtin") << endl;
	cout << toInteger("124") << endl;
	cout << toInteger("9") << endl;
}

