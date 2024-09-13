#include <fstream>
#include <string>
#include <mutex>
using namespace std;

class Storage {
public:
	Storage(string filename);
	int read();
	void write(int data);
	~Storage();
private:
	int buffer;
	fstream file;
	mutex mtx;
};
