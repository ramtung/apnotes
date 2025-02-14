#include <vector>
#include <list>
#include <iostream>
#include <iomanip>
#include <chrono>

using namespace std;
using namespace chrono;

int main()
{
	vector<double> v;
	list<double> l;

  steady_clock::time_point begin;
  steady_clock::time_point end;

	for (int i = 0; i < 10000; i++) {
		cout << "size = " << v.size() 
      << "\tcapacity = " << setw(5) << v.capacity();
		
		begin = steady_clock::now();
		v.push_back(0);
		end = steady_clock::now();
		cout << "\tvector: " << setw(6)
      << duration_cast<nanoseconds>(end-begin).count() 
      << "[ns]";

		begin = steady_clock::now();
		l.push_back(0);
		end = steady_clock::now();
		cout << "\tlist:"  << setw(6)
      << duration_cast<nanoseconds>(end-begin).count() 
      << "[ns]\n";
	}
}
