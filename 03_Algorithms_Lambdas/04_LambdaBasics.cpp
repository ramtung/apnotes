#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printVector(vector<int> v) {
	for_each(v.begin(), v.end(), [](int a) { cout << a << ' ';});
	cout << endl;
}

int main() {
	vector<int> v = {12, 4, 748, 33, 50};
	
	auto pos = find_if(v.begin(), v.end(), [](int n) { return n%2; });
	if (pos != v.end())
		cout << *pos << endl;

	sort(v.begin(), v.end());
  printVector(v);

	sort(v.begin(), v.end(), [](int a, int b) { return b < a; });
  printVector(v);
	
	for_each(v.begin(), v.end(), [](int a) { a *= 2; });
  printVector(v);

	for_each(v.begin(), v.end(), [](int& a) { a *= 2; });
  printVector(v);
}