#include <iostream>
#include <cstdlib>
#include "date.h"
using namespace std;

Date default_date(1,1,1);

bool is_leap_year(int y) {
	int r = y % 33;
	return r==1 || r==5 || r==9 || r==13 || r==17 || r==22 || r==26 || r==30;
}

int days_of_month(int m, int y) {
	if (m < 7)
		return 31;
	else if (m < 12)
		return 30;
	else if (m == 12)
		return is_leap_year(y) ? 30 : 29;
	else 
		throw Bad_Date_Exception();
}

Date::Date(int d, int m, int y) {
	if (y < 0 || m < 1 || m > 12 || d < 1 || d > days_of_month(m, y))
		throw Bad_Date_Exception();
	day = d;
	month = m;
	year = y;
}

void Date::print() {
	cout << year << '/' << month << '/' << day;
}

Date read_date(ifstream& input) {
	int d, m, y;
	char ch;
	input >> d;
        input >> ch;
	if (ch != '/')
		throw Bad_Date_Exception();
        input >> m;
        input >> ch;
	if (ch != '/')
		throw Bad_Date_Exception();
	input >> y;
	return Date(d, m, y);
}

