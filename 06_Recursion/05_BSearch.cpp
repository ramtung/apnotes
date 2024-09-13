#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int> list, int from, int to, int key)
{
    if (list.size() == 0)
        return -1;
    if (from > to)
        return -1;

    int mid = (from + to) / 2;
    if (list[mid] == key)
        return mid;
    else if (list[mid] < key)
        return binary_search(list, mid + 1, to, key);
    else
        return binary_search(list, from, mid - 1, key);
}















int main()
{
    const int key = 19;

    cout << "Enter a sorted list of integers. I will look for 19 in the list! ";
    vector<int> list;
    int x;
    while (cin >> x)
        list.push_back(x);
    
    int idx = binary_search(list, 0, list.size() - 1, key);
    
    if (idx == -1)
        cout << "key not found" << endl;
    else
        cout << "key is found at index " << idx << endl;
}