#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v = {12, 4, 748, 33, 50};

	int sum = 0;
	
	// compile error:
	// for_each(v.begin(), v.end(), [](int a) { sum += a; });

	for_each(v.begin(), v.end(), [&](int a) { sum += a; });
	cout << sum << endl;

	// compile error:
	// for_each(v.begin(), v.end(), [=](int a) { sum += a; });

	sum = 0;
	int factor = 2;
	for_each(v.begin(), v.end(), [&sum, factor](int a) { sum += factor * a; });
	cout << sum << endl;
}