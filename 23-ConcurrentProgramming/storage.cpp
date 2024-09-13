#include "storage.h"

Storage::Storage(string filename) {
	ofstream(filename).close(); // create the file if not exists
	file.open(filename, ios::in | ios::out | ios::binary);
}

int Storage::read() {
	mtx.lock();
	file.seekg(ios::beg);
	file.read((char*)&buffer, sizeof(buffer));
	mtx.unlock();
	return buffer;
}

void Storage::write(int data) {
	mtx.lock();
	file.seekp(ios::beg);
	buffer = data;
	file.write((char*)&buffer, sizeof(buffer));
	file.flush();
	mtx.unlock();
}

Storage::~Storage() {
	file.close();
}
