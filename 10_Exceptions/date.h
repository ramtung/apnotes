#include <fstream>
using namespace std;

class Date {
public:
	Date(int d, int m, int y);
	void print();
private:
	int day;
	int month;
	int year;
};

extern Date default_date;

Date read_date(ifstream& input);

class Bad_Date_Exception {};
