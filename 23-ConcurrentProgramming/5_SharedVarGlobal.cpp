#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int x = 7;

void incr() {
	for (int i = 0; i < 10; i++) {
		x++;
	}
}

void decr() {
	for (int i = 0; i < 10; i++) {
		x--;
	}
}

int main() {
	thread i(incr);
	thread d(decr);

	i.join();
	d.join();

	cout << x << ' ';
}