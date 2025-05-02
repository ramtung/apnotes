#include <iostream>
#include <stdexcept>
using namespace std;

#define DEFAULT_SIZE 10

class Stack {
public:
  Stack(int size = DEFAULT_SIZE);
  Stack(const Stack&);
  ~Stack();
  Stack& operator=(const Stack&);
  void Push(int x);
  void Pop();
  int Top() const;
  bool IsEmpty() const { return count_ == 0; }
  bool IsFull() const { return count_ == size_; }
  private:
  int *elements_;
  int size_;
  int count_;
};

Stack::Stack(int s) {
  cout << "--constructor called\n";
  size_ = s;
  elements_ = new int[size_];
  count_ = 0;
}

Stack::Stack(const Stack& s) {
  cout << "-- copy constructor called\n";
  size_ = s.size_;
  count_ = s.count_;
  elements_ = new int[size_];
  for (int i = 0; i < count_; i++)
    elements_[i] = s.elements_[i];
}

Stack::~Stack() {
  cout << "--destructor called\n";
  delete[] elements_;
}

Stack& Stack::operator=(const Stack& s)
{
  if (this == &s)
		return *this;
		
  count_ = s.count_;
  size_ = s.size_;
  delete[] elements_;
  elements_ = new int[size_];
  for (int i = 0; i < count_; i++)
    elements_[i] = s.elements_[i];
    
  return *this;
}

void Stack::Push(int x) {
  if (count_ >= size_)
    throw overflow_error("Stack overflow");

  elements_[count_] = x;
  count_++;
}

void Stack::Pop() {
  if (count_ > 0)
    count_--;
  else
    throw underflow_error("Stack is empty");
}

int Stack::Top() const {
  if (count_ > 0)
    return elements_[count_-1];
  else
    throw underflow_error("Stack is empty");
}

class A {
public:
	A() {
		p = new Stack(100);
	}
	~A() {
		delete p;
	}
	A(const A& a) {
		s = a.s;
	  p = new Stack(*(a.p));
	} 
private:
	Stack s;
	Stack *p;
};

int main() {
	A x;
	A y = x;
}