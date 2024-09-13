/* 
Design by Contract
Bertrand Meyer
Eiffel
Object-Oriented Software Construction


Precondition
Postcondition

Pre M Post: if Pre holds, and M is executed, Post will hold

0. Clients must check the preconditions
1. Supplier should assert the preconditions
2. Fail fast (in case preconditions failed)
3. Document the preconditions
4. Provide public operations for checking preconditions

*/

#define NDEBUG

#include <cassert>
#include <vector>
#include <iostream>
using namespace std;

class Stack {
public:
	Stack(int size);
	bool is_empty() { return count == 0; }
	bool is_full() { return count == elements.size(); }
	int top();
	void push(int x);
	void pop();
private:
	vector<int> elements;
	int count;
};

Stack::Stack(int size) : elements(size) {
	count = 0;
}

void Stack::pop() {
	assert(count > 0);
	count--;
}

int Stack::top() {
	assert(count > 0);
	return elements[count-1];
}

void Stack::push(int x) {
	assert(count < elements.size());
	elements[count] = x;
	count++;
}

int main() {
	Stack s(10);
	s.pop();
	s.push(12);
	cout << s.top() << endl;
}

