#include <iostream>
#include <thread>
using namespace std;

void worker(char id) {
	for (int i = 0; i < 1000; i++) {
		cout << id;
		cout.flush();
	}
}

int main() {
	thread ex(worker, 'x');
	thread dot(worker, '.');
	
	ex.join();
	dot.join();
}