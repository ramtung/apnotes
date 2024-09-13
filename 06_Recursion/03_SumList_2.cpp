// Changed the type of 'list' to reference
// Added default value for 'i'

#include <iostream>
#include <vector>
using namespace std;

int sum_list(vector<int>& list, int i = 0)
{
    if (i == list.size())
        return 0;
    else
        return list[i] + sum_list(list, i + 1);
}

int main()
{
    vector<int> a;
    // This will cause stack overflow if the parameter is passed by value
	for (int i = 0; i < 100000; i++) {
		a.push_back(i);
	}

    cout << "sum = " << sum_list(a) << endl;
}