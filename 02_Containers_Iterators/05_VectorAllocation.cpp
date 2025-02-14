#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<int> v;
	for (int i = 0; i < 20; i++) {
		cout << i 
      << "\tsize:  " << v.size() 
      << "\tcapacity: " << v.capacity() 
      << "\taddress: " << &v[0] << '\n';
		v.push_back(7);
	}
}
