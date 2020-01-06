#include<iostream>
#include<string>
using namespace std;

template<typename T>
class Cell {
public:
    Cell(T d) : data(d) {}
    T get_value() const;
    void set_value(T x);
private:
    T data;
};

template<typename T>
T Cell<T>::get_value() const {
    return data;
}

template<typename T>
void Cell<T>::set_value(T x) {
    data = x * 2;
}


int main() {
    Cell<int> a(10);
    a.set_value(12);
    cout << a.get_value() << endl;

    string s = "JJ";
	string t = "UU";
    Cell<string> b(s);
	b.set_value(t);
    cout << b.get_value() << endl;
}