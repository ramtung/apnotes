#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	// C++11 Syntax:
	vector<int> v = {1, 3, 6, 2};

	for (int x : v)
		cout << x << ' ';
	cout << endl;

	// type inference
	auto u = v;
	for (auto x : u)
		cout << x << ' ';
	cout << endl;

	auto p = &u[0];	// int* p = ...
}









