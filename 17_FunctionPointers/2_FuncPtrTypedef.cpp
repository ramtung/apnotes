#include <iostream>
using namespace std;

typedef void (*func_ptr_type)(int);

void print(int x) {
    cout << x << endl;
}

void print_twice(int x) {
    cout << x << ' ' << x << endl;
}

int main() {
    func_ptr_type fp;

    fp = print;
    fp(10);
}