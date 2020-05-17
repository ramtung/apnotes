#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <algorithm>
using namespace std;

/*
template<typename I, typename T>
I find(I first, I last, const T& val) {
    while (first!=last && *first != val) 
        ++first;
    return first; 
}
*/

int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(123);
    v.push_back(87);

    vector<int>::iterator p = find(v.begin(), v.end(), 123);
    if (p != v.end())
        cout << "Found " << *p << endl;
    else
        cout << "Not found" << endl;

    list<string> words;
    words.push_back("Looking");
    words.push_back("for");
    words.push_back("the");
    words.push_back("Summer");

    list<string>::iterator q = find(words.begin(), words.end(), "the");
    if (q != words.end())
        cout << "Found " << *q << endl;
    else
        cout << "Not found" << endl;

    double nums[] = {1.4, 50.1, 3.5};
    double *r = find(nums, nums + sizeof(nums)/sizeof(double), 50.1);
    if (r != nums + sizeof(nums)/sizeof(double))
        cout << "Found " << *r << endl;
    else
        cout << "Not found" << endl;
}