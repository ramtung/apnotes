#include <iostream>
#include <cstdlib>
using namespace std;

class Date {
public:
    Date(int d, int m, int y);
    void set_date(int d, int m, int y);
    void print_date();

	// inline definition
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

void Date::set_date(int d, int m, int y)
{
    if (y < 0 ||
            m < 1 || m > 12 ||
            d < 1 ||
            (m < 7 && d > 31) ||
            (m > 6 && m < 12 && d > 30) ||
            (m == 12 && d > 29))
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