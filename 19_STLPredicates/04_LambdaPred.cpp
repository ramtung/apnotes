#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
template<class In, class Pred>
In find_if(In first, In last, Pred pred) {
    while (first!=last && !pred(*first)) 
        ++first;
    return first; 
}
*/

bool odd(int x) { return x % 2; }
bool gt_5(int x) { return x > 5; }

class gt {
public:
	gt(int a) { limit = a; }
	bool operator()(int x) { return x > limit; }
private:
	int limit;
};

int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(39);
    v.push_back(42);

    auto it = find_if(v.begin(), v.end(), gt_5);
    cout << *it << endl;

    auto it2 = find_if(v.begin(), v.end(), gt(5));
    cout << *it2 << endl;

    auto it3 = find_if(begin(v), end(v), gt(20));
    cout << *it3 << endl;

    auto it4 = find_if(begin(v), end(v), [](int a) {return a > 40;} );
    cout << *it4 << endl;
}