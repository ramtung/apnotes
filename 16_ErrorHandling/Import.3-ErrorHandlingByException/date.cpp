#include <iostream>
#include "date.h"
using namespace std;

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
        throw runtime_error("Invalid month number"); // throwing invalid_argument is a better choice, but we want to have a single catch clause in this example
}

Date::Date(int d, int m, int y) {
    if (y < 0 || m < 1 || m > 12 || d < 1 || d > days_of_month(m, y))
        throw runtime_error("Invalid arguments to Date constructor"); // throwing invalid_argument is a better choice, but we want to have a single catch clause in this example

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
        throw runtime_error("Slash separator expected");
    input >> m;
    input >> ch;
    if (ch != '/')
        throw runtime_error("Slash separator expected");
    input >> y;
    return Date(d, m, y);
}