#include <vector>
#include <cstdlib>
#include <iostream>
using namespace std;

class Base {
public:
	virtual void m() { cout << "Base::m" << endl; }
};

class Derived : public Base {
public:
	Derived(int _i) { i = _i; }
	int i;
	void f() { cout << "Derived::f " << i << endl; }	
};

void process_derived(Derived* d) {
	d->f();
}

int main() {
	Derived d(1300);
	Base b;
	
	Base* bp;
 	bp = &d;

	Derived* dp;
	dp = dynamic_cast<Derived*>(bp);
	if (dp != NULL)
		process_derived(dp);
}



