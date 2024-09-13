#include <iostream>
#include <string>
#include <cstdlib>
#include "date.hpp"

using namespace std;
                                                                               
Date::Date(int d, int m, int y)
{
    set_date(d, m, y);
}

bool is_leap_year(int year)
{
    int r = year % 33;
    return r==1 || r==5 || r==9 || r==13 || r==17 || r==22 || r==26 || r==30;
}

int days_of_month(int m, int y)
{
    if (m < 7)
        return 31;
    else if (m < 12)
        return 30;
    else if (m == 12)
        return is_leap_year(y) ? 30 : 29;
    else
        abort();
}

void Date::set_date(int d, int m, int y)
{
    if (y < 0 || m < 1 || m > 12 || d < 1 || d > days_of_month(m, y))
        abort();

    day = d;
    month = m;
    year = y;
}

void Date::inc_one_day()
{
    day++;
    if (day > days_of_month(month, year)) {
        day = 1;
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }
}

void Date::print_date()
{
    cout << day << '/' << month << '/' << year << endl;
}

bool Date::equals(Date d) {
    return day == d.day && month == d.month && year == d.year;
}

Date str_to_date(string s) {
    //TODO: Handle formatting errors
    int slash_pos = s.find('/');
    int d = atoi(s.substr(0, slash_pos).c_str());
    s = s.substr(slash_pos + 1);
    slash_pos = s.find('/');
    int m = atoi(s.substr(0, slash_pos).c_str());
    int y = atoi(s.substr(slash_pos + 1).c_str());

    return Date(d, m, y);
}