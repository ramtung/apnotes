#include <iostream>
#include <cstdlib>
using namespace std;

class Date {
public:
	// method or member function
    void set_date(int d, int m, int y);
    void print_date();
private:
	// field  or member variable
    int day;
    int month;
    int year;
};

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
    cout << day << '/' << month << '/' << year << endl;
}

int main()
{
    Date bd;
	bd.print_date();
	
    bd.set_date(31, 6, 1352);
    bd.print_date();
    // bd.day = 14;
}








