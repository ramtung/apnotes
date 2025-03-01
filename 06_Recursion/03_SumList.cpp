#include <iostream>
#include <vector>
using namespace std;

int sum_list(vector<int> list, int i) {
    if (i == list.size())
        return 0;
    else
        return list[i] + sum_list(list, i + 1);
}

int main() {
    vector<int> a;
    int x;
    while (cin >> x)
        a.push_back(x);

    cout << "sum = " << sum_list(a, 0) << endl;
}





