// Using C++11 style initialization

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
    vector<int> a = {1, 4, 2, 3, 6};
    cout << "sum = " << sum_list(a) << endl;
}





