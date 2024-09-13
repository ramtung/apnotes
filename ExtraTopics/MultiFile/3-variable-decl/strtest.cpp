#include <iostream>
#include "strutil.hpp"
using namespace std;

int main() {
	cout << reverse("hello") << endl;
	cout << toUpper("Ramtin") << endl;
	cout << toInteger("124") << endl;
	cout << conv_error << endl;
	cout << toInteger("12r4") << endl;
	cout << conv_error << endl;
}

