#include <vector>
#include <cstdlib>
#include <iostream>
using namespace std;

class Gerd {
public:
	virtual void what_are_you() { cout << "Gerd\n"; }	
};

class Gerdoo : public Gerd {
public:
	virtual void what_are_you() { cout << "Gerdoo\n"; }	
	void beshkan() {}
};

int main()
{
	Gerd g;
	Gerdoo w;
	
	Gerd* p;
	Gerdoo* q;
	
	p = &w;		// up-casting

	q = (Gerdoo*)p;
	
	q = dynamic_cast<Gerdoo*>(p);
	if (q == NULL) {
		cout << "the object is not compatible with Gerdoo\n";
	} else {
		// do some Gerdoo thing
		q->beshkan();
	}
	
	
	
	
	
}	





