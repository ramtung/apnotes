#include <vector>
#include <list>
#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int main()
{
	vector<double> v;
	for (int i = 0; i < 10000; i++) {
		cout << i << "\tsize = " << v.size() 
		          << "\tcapacity = " << v.capacity();
		
		steady_clock::time_point begin = steady_clock::now();
		v.push_back(0);
		steady_clock::time_point end = steady_clock::now();
		cout << "\ttime = " << duration_cast<nanoseconds>(end-begin).count() << "[ns]" << endl;
	}

	list<double> l;
	for (int i = 0; i < 10000; i++) {
		cout << i << "\tsize = " << l.size();
		
		steady_clock::time_point begin = steady_clock::now();
		l.push_back(0);
		steady_clock::time_point end = steady_clock::now();
		cout << "\ttime = " << duration_cast<nanoseconds>(end-begin).count() << "[ns]" << endl;
	}

}
