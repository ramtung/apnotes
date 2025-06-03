#include <iostream>
#include <thread>
#include <queue>
#include <mutex>
using namespace std;

queue<int> q;

void producer() {
	for (int i = 0; i < 1000; i++) {
		q.push(i);
	}
}

int main() {
	thread prod1(producer);
	thread prod2(producer);

	prod1.join();
	prod2.join();

	cout << q.size() << endl;

}