#include "storage.h"

Storage::Storage(string filename) {
	ofstream(filename).close(); // create the file if not exists
	file.open(filename, ios::in | ios::out | ios::binary);
}

int Storage::read() {
	file.seekg(ios::beg);
	file.read((char*)&buffer, sizeof(buffer));
	return buffer;
}

void Storage::write(int data) {
	file.seekp(ios::beg);
	buffer = data;
	file.write((char*)&buffer, sizeof(buffer));
	file.flush();
}

Storage::~Storage() {
	file.close();
}
