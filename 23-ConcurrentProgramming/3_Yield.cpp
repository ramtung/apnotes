#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void yorker(char id) {
	for (int i = 0; i < 1000; i++) {
		cout << id;
		cout.flush();
		this_thread::yield();
	}
}

void worker(char id) {
	for (int i = 0; i < 1000; i++) {
		cout << id;
		cout.flush();
	}
}

int main() {
	cout << "Hello" << endl;
	thread ex(worker, 'x');
	thread dot(yorker, '.');

	ex.join();
	dot.join();
}