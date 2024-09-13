#include <iostream>
#include <cstdlib>
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
        abort();
}

Date::Date(int d, int m, int y) {
    if (y < 0 || m < 1 || m > 12 || d < 1 || d > days_of_month(m, y))
        abort();
    day = d;
    month = m;
    year = y;
}

void Date::print() {
    cout << day << '/' << month << '/' << year;
}

Date read_date(ifstream& input) {
    int d, m, y;
    char ch;
    input >> d >> ch >> m >> ch >> y;
    return Date(d, m, y);
}
