#include <vector>
#include <cstdlib>
#include <iostream>
using namespace std;

class Base {
public:
	void call_alaki() { 
		this->alaki(); 
		this->dolaki();
		this->selaki();
	}
	virtual void alaki() { cout << 1 << endl; }
	void dolaki() { cout << 3 << endl; }
private:
	void selaki() { cout << 5 << endl; }
};

class Derived : public Base {
public:
	virtual void alaki() { cout << 2 << endl; }
	void dolaki() { cout << 4 << endl; }
private:
	void selaki() { cout << 6 << endl; }
};

int main() {
	Derived d;
	Base* bp;
	
	bp = &d;
	bp->call_alaki();
}





