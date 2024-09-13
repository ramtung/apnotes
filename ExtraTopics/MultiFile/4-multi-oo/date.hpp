#include <string>
using namespace std;                                                                               

class Date {
public:
	Date() { day = month = year = 1; }
    Date(int d, int m, int y);
    void set_date(int d, int m, int y);
    void print_date();
    void inc_one_day();
    bool equals(Date d);

    int get_day() { return day; }
    int get_month() { return month; }
    int get_year() { return year; }
private:
    int day;
    int month;
    int year;
};

bool is_leap_year(int year);
int days_of_month(int m, int y);
Date str_to_date(string s);
