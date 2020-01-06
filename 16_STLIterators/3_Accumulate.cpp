#include <iostream>
#include <vector>
using namespace std;

template <class I, class T>
T accumulate(I first, I last, T init)
{
    for (; first != last; ++first)
        init = init + *first;
    return init;
}
 
int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(12);
    v.push_back(8);

    cout << accumulate(v.begin(), v.end(), 0) << endl;

    vector<string> u;
    u.push_back("gholi");
    u.push_back("aroosi");
    u.push_back("naraft!");

    cout << accumulate(u.begin(), u.end(), string("")) << endl;

}