#include <iostream>
using namespace std;

#define DEFAULT_SIZE 10

class invalid_operation_ex {};

class stack {
public:
    stack(int size = DEFAULT_SIZE);
    ~stack();   // destructor
    void push(int x);
    void pop();
    int top() const;
    int elem_count() const { return count; }
private:
    int *elements;
    int size;
    int count;
};

stack::stack(int s) {
    cout << "--constructor called\n";
    size = s;
    elements = new int[size];
    count = 0;
}

stack::~stack() {
    cout << "--destructor called\n";
    delete[] elements;
}

void stack::push(int x) {
    if (count >= size)
        throw invalid_operation_ex();

    elements[count] = x;
    count++;
}

void stack::pop() {
    if (count > 0)
        count--;
    else
        throw invalid_operation_ex();
}

int stack::top() const {
    if (count > 0)
        return elements[count-1];
    else
        throw invalid_operation_ex();
}

int main() {
	cout << "Hello" << endl;
   	stack s(100);
    s.push(4);
    cout << s.top() << endl;
	cout << "Bye" << endl;
}