#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<double> v;
	for (int i = 0; i < 20; i++) {
		cout << i << "\tsize = " << v.size() 
		          << "\tcapacity = " << v.capacity() << endl;
		v.push_back(0);
	}
}
