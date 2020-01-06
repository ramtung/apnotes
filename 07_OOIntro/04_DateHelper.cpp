#include <iostream>
#include <cstdlib>
using namespace std;


class Date {
public:
    Date(int d, int m, int y);
    void set_date(int d, int m, int y);
    void print_date();

    int get_day() { return day; }
    int get_month() { return month; }
    int get_year() { return year; }
private:
    int day;
    int month;
    int year;
};

Date::Date(int d, int m, int y)
{
    set_date(d, m, y);
}

bool is_leap_year(int year)
{
    int r = year % 33;
    return r==1 || r==5 || r==9 || r==13 || r==17 || r==22 || r==26 || r==30;
}

void Date::set_date(int d, int m, int y)
{
    if (y < 0 || 
        m < 1 || m > 12 || 
        d < 1 || 
        (m < 7 && d > 31) || 
        (m > 6 && m < 12 && d > 30) ||
        (m == 12 && !is_leap_year(y) && d > 29) ||
        (m == 12 && is_leap_year(y) && d > 30)) 
            abort();

    day = d;
    month = m;
    year = y;
}

void Date::print_date()
{
    cout << day << '/' << month << '/' << year;
}

int main()
{
    Date bd(31, 6, 1352);
    bd.print_date();
    cout << '\n';
    cout << bd.get_day() << endl;
}
