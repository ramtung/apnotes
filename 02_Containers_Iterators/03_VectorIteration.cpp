#include <vector>
#include <iostream>
using namespace std;

int main() {
	vector<int> v = {1, 3, 6, 2};

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << ' ';
	cout << endl;

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









