#include <iostream>
#include <stdexcept>
using namespace std;

#define DEFAULT_SIZE 10

class Stack {
public:
  Stack(int size = DEFAULT_SIZE);
  ~Stack();
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

Stack::Stack(int size) {
  cout << "--constructor called\n";
  size_ = size;
  elements_ = new int[size_];
  count_ = 0;
}

Stack::~Stack() {
  cout << "--destructor called\n";
  delete[] elements_;
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

int main() {
	cout << "Hello" << endl;
  Stack s(100);
  s.Push(4);
  cout << s.Top() << endl;
	cout << "Bye" << endl;
}