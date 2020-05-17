#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
template<class It, class T>
It find_if(It first, It last, bool (*pred)(T)) {
    while (first!=last && !pred(*first)) 
        ++first;
    return first; 
}
*/

bool odd(int x) { return x % 2; }

int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(39);
    v.push_back(42);

    // It : vector<int>::iterator
    // Pred: bool (*)(int)
    vector<int>::iterator it = find_if(v.begin(), v.end(), odd);
    cout << *it << endl;
}