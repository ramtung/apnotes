#include <iostream>
using namespace std;

#define SIZE 10
#define log(a) cerr << (a) << endl

#define abstract(mtd) mtd = 0

class A {
	abstract(virtual void f(int x));
};

int main() {
	cout << SIZE << endl;

	log("error encountered!");
	log(132);
	log(2 > 1 ? "hello" : "bye");	
}
