#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v = {12, 4, 748, 33, 50};
	
	auto pos = find_if(v.begin(), v.end(), [](int n) { return n%2; });
	if (pos != v.end())
		cout << *pos << endl;

	sort(begin(v), end(v), [](int a, int b) { return b < a; });
	
	for_each(begin(v), end(v), [](int a) { cout << a << ' ';});
	cout << endl;

	for_each(begin(v), end(v), [](int a) { a *= 2; }); // does nothing

	for_each(begin(v), end(v), [](int a) { cout << a << ' ';});
	cout << endl;

	for_each(begin(v), end(v), [](int& a) { a *= 2; }); // works this time

	for_each(begin(v), end(v), [](int a) { cout << a << ' ';});
	cout << endl;

}


