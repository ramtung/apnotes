#include <iostream>
#include <thread>
#include <chrono>
#include "storage.h"
using namespace std;

void incr(Storage* storage) {
	for (int i = 0; i < 10; i++) {
		int x = storage->read();
		// this_thread::sleep_for(chrono::milliseconds(100));
		x++;
		storage->write(x);
	}
}

void decr(Storage* storage) {
	for (int i = 0; i < 10; i++) {
		int x = storage->read();
		// this_thread::sleep_for(chrono::milliseconds(100));
		x--;
		storage->write(x);
	}
}

void f() {
	Storage storage("data");
	storage.write(7);

	thread i(incr, &storage);
	thread d(decr, &storage);

	i.join();
	d.join();

	cout << storage.read() << ' ';

}

int main() {
	for (int i = 0; i < 1000; i++) {
		f();
	}
}