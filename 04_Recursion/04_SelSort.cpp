#include <iostream>
#include <vector>
using namespace std;

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}


int min_index(vector<int> list, int i)
{
    if (i == list.size() - 1)
        return i;

    int min_idx_rest = min_index(list, i + 1);
    if (list[i] < list[min_idx_rest])
        return i;
    else
        return min_idx_rest;
}

void selection_sort(vector<int>& list, int i)
{
    if (i == list.size())
        return;
    int j = min_index(list, i);
    swap(list[i], list[j]);
    selection_sort(list, i + 1);    
}

void print_list(vector<int> list, int i)
{
    if (i == list.size())
        cout << endl;
    else {
        cout << list[i] << ' ';
        print_list(list, i + 1);
    }
}

int main()
{
    vector<int> a;
    int x;
    while (cin >> x)
        a.push_back(x);
    
    selection_sort(a, 0);
    print_list(a, 0);
}