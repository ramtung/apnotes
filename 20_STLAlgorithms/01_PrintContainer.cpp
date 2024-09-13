#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<int> v) {
	vector<int>::iterator it = v.begin();
    while (it != v.end()) {
        cout << *it << ' ';
        ++it;
    }
}

template<typename Container>
void print(Container c) {
	auto it = c.begin();
    while (it != c.end()) {
        cout << *it << ' ';
        ++it;
    }
    cout << endl;
}

template<typename Iterator>
void print2(Iterator first, Iterator last) {
	Iterator it = first;
    while (it != last) {
        cout << *it << ' ';
        ++it;
    }
    cout << endl;
}


int main() {
	vector<int> v;
    v.push_back(10);
    v.push_back(123);
    v.push_back(87);

    print(v);
    print2(v.begin(), v.end());
}



