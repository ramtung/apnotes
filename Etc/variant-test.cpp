#include <variant>
#include <string>
#include <iostream>
using namespace std;

class Base {
public:
	virtual void f() = 0;
};

template<typename T>
class Cell : public Base {
public:
	Cell(T val) : value(val) {}
	virtual void f() { cout << value << endl; }
	T value;
};

int main() {
	variant<Base*, string*> v;
	string s = "gholam";
	Cell<int> cint(14);

	v = &cint;
	get<Base*>(v)->f();
}



