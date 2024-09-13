// Wrapping the recursive bsearch in binary_search to get rid of from and to parameters
#include <iostream>
#include <vector>
using namespace std;

int bsearch(vector<double> list, int from, int to, double key)
{
    if (list.size() == 0)
        return -1;
    if (from > to)
        return -1;

    int mid = (from + to) / 2;
    if (list[mid] == key)
        return mid;
    else if (list[mid] < key)
        return bsearch(list, mid + 1, to, key);
    else
        return bsearch(list, from, mid - 1, key);
}

int binary_search(vector<double> v, double key) {
    return bsearch(v, 0, v.size() - 1, key);
}

int main()
{
    const int key = 19;

    cout << "Enter a sorted list of numbers. I will look for 19 in the list! ";
    vector<double> list;
    int x;
    while (cin >> x)
        list.push_back(x);
    
    int idx = binary_search(list, key);
    
    if (idx == -1)
        cout << "key not found" << endl;
    else
        cout << "key is found at index " << idx << endl;
}