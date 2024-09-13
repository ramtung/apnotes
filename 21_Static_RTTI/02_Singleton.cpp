#include <iostream>
#include <vector>
using namespace std;

class University {
public:
	void print() { cout << name << endl; }
	static University* get_instance() {
		return &the_uni;
	}
private:
	string name;
	University(string n) { name = n; }
	static University the_uni;
};

University University::the_uni("U of Tehran");

int main() {
	University* u = University::get_instance();
	u->print();
}
	

