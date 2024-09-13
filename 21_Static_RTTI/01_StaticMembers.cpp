#include <iostream>
#include <vector>
using namespace std;

class A {
public:
	static void f();
	static int s;
};

int A::s = 10;

void A::f() {
	cout << 1 << endl;
}

int main () {
	A::f();
	
	A a;
	a.f();
	
	cout << A::s << endl;
}