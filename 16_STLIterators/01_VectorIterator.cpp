#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(123);
    v.push_back(87);

    vector<int>::iterator it = v.begin();
    while (it != v.end()) {
        cout << *it << ' ';
        ++it;
    }
    cout << endl;

    for (vector<int>::iterator it2 = v.begin(); it2 != v.end(); ++it2)
        cout << *it2 << ' ';
    cout << endl;

    // Using C++11 type inference:
    for (auto it2 = v.begin(); it2 != v.end(); ++it2)
        cout << *it2 << ' ';
    cout << endl;
}