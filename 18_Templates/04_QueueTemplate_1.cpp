#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

const int SIZE = 10;

template<typename T>
class Queue {
public:
  Queue() { count_ = 0; }
  void enqueue(T x);
  T dequeue();
  int size() const { return count_; }
private:
  T elements_[SIZE];
  int count_;
};

template<typename T>
void Queue<T>::enqueue(T x) {
  if (count_ >= SIZE)
    throw overflow_error("Queue is full");
  elements_[count_++] = x;
}

template<typename T>
T Queue<T>::dequeue() {
  if (count_ == 0)
    throw underflow_error("Queue is empty");
  T result = elements_[0];
  for (int i = 1; i < count_; i++)
    elements_[i-1] = elements_[i];
  count_--;
  return result;
}

int main() {
  Queue<int> q;
  q.enqueue(10);
  q.enqueue(20);
  cout << q.dequeue() << endl;

  Queue<string> p;
  p.enqueue("salaam");
  p.enqueue("chetori?");
  cout << p.dequeue() << endl;  
}