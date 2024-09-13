#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <cassert>
using namespace std;

class Queue {
public:
	Queue(int size) : data(size) {
		if (size <= 0)
			abort();
		front = 0;
		rear = size-1;
		count = 0;
	}
	bool is_empty() {
		return count == 0;
	}
	bool is_full() {
		return count == data.size();
	}
	int get_front() {
		if (is_empty())
			abort();
		return data[front];
	}
	void enqueue(int x) {
		if (is_full())
			abort();
		rear = next(rear);
		data[rear] = x;
		count++;
	}
	void dequeue() {
		if (is_empty())
			abort();
		front = next(front);
		count--;
	}
private:
	vector<int> data;
	int front;
	int rear;
	int count;

	int next(int index) {
		return (index + 1) % data.size();
	}
};

int main() {
	Queue q(2);
	cout << q.is_empty() << endl;
	cout << q.is_full() << endl;
	q.enqueue(12);
	cout << q.is_empty() << endl;
	cout << q.is_full() << endl;
	q.enqueue(13);
	cout << q.is_empty() << endl;
	cout << q.is_full() << endl;
	cout << q.get_front() << endl;
	cout << q.get_front() << endl;
	q.dequeue();
	cout << q.get_front() << endl;
	q.dequeue();
	cout << q.is_empty() << endl;
	cout << q.is_full() << endl;
}