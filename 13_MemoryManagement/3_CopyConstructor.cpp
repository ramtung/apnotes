#include <iostream>
using namespace std;

#define DEFAULT_SIZE 10

class invalid_operation_ex {};
class stack {
public:
    stack(int size = DEFAULT_SIZE);
    stack(const stack&);
    ~stack();
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

stack::stack(const stack& s) {
    cout << "-- copy constructor called\n";
    size = s.size;
    count = s.count;
    elements = new int[size];
    for (int i = 0; i < count; i++)
        elements[i] = s.elements[i];
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
void print_stack(stack s) {
    while (s.elem_count() > 0) {
        cout << s.top() << ' ';
        s.pop();
    }
    cout << endl;
}

int main() {
    stack u;
    u.push(4);
    u.push(5);
    u.push(12);
    print_stack(u);
    u.pop();
    u.pop();
    u.pop();
    // Explain the result of execution of this code
}