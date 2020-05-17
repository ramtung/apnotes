#include <iostream>
using namespace std;

typedef int (*binop)(int, int);

int f(binop op, int x, int y, int z) {
    return op(op(x, y), z);
}

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }

int main() {
    cout << f(add, 1, 3, 5) << endl;
    cout << f(sub, 1, 3, 5) << endl;
}

