#include <iostream>
using namespace std;

typedef function<bool (int)> intset;

intset intersect(intset s1, intset s2) {
	return [=](int i) { return s1(i) && s2(i); };	
}

intset union_(intset s1, intset s2) {
	return [=](int i) { return s1(i) || s2(i); };	
}

int main() {
	intset f = [](int i) { return i % 3 == 0; };
	intset g = [](int i) { return i >= 50; };

	intset h = intersect(f, g);
	cout << h(51) << endl;
	cout << h(52) << endl;
	cout << h(48) << endl;

	h = union_(f, g);
	cout << h(51) << endl;
	cout << h(52) << endl;
	cout << h(48) << endl;

}