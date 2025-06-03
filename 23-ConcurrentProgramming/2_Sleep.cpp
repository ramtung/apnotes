#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void worker(char id, int sleep_ms) {
	for (int i = 0; i < 1000; i++) {
		cout << id;
		cout.flush();
		this_thread::sleep_for(chrono::milliseconds(sleep_ms));
	}
}

int main() {
	cout << "Hello" << endl;
	thread ex(worker, 'x', 10);
	thread dot(worker, '.', 30);

	ex.join();
	dot.join();
}