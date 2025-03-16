#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
using namespace std;                                                          

class Date {
public:
    Date(int d, int m, int y);
    void setDate(int d, int m, int y);
    void printDate();
    void incOneDay();
    bool equals(Date d);

    int getDay() { return day; }
    int getMonth() { return month; }
    int getYear() { return year; }
private:
    int day;
    int month;
    int year;
};

Date::Date(int d, int m, int y)
{
    setDate(d, m, y);
}

bool isLeapYear(int year)
{
    int r = year % 33;
    return r==1 || r==5 || r==9 || r==13 || r==17 || r==22 || r==26 || r==30;
}

int daysOfMonth(int m, int y)
{
    if (m < 7)
        return 31;
    else if (m < 12)
        return 30;
    else if (m == 12)
        return isLeapYear(y) ? 30 : 29;
    else
        abort();
}

void Date::setDate(int d, int m, int y)
{
    if (y < 0 || m < 1 || m > 12 || d < 1 || d > daysOfMonth(m, y))
        abort();

    day = d;
    month = m;
    year = y;
}

void Date::incOneDay()
{
    day++;
    if (day > daysOfMonth(month, year)) {
        day = 1;
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }
}

void Date::printDate()
{
    cout << day << '/' << month << '/' << year << endl;
}

bool Date::equals(Date d) {
    return day == d.day && month == d.month && year == d.year;
}

Date strToDate(string s) {
    //TODO: Handle formatting errors
    int slash_pos = s.find('/');
    int d = atoi(s.substr(0, slash_pos).c_str());
    s = s.substr(slash_pos + 1);
    slash_pos = s.find('/');
    int m = atoi(s.substr(0, slash_pos).c_str());
    int y = atoi(s.substr(slash_pos + 1).c_str());

    return Date(d, m, y);
}

class Person {
public:
    Person(string n, int d, int m, int y);
    Date get_bdate() { return bdate; }
    string get_name() { return name; }
private:
    string name;
    Date bdate; 
};

Person::Person(string n, int d, int m, int y)
	: bdate(d, m, y)
{
    if (n == "")
        abort();
    name = n;
}

int main()
{
    vector<Person> vp;
    vp.push_back(Person("gholam", 2, 7, 1370));
    vp.push_back(Person("ghamar", 3, 12, 1368));
    vp.push_back(Person("alaleh", 12, 2, 1360));

    cout << "Today? ";
    string today_str;
    cin >> today_str;
    Date today = strToDate(today_str);
    
    for (int i = 0; i < vp.size(); i++)
        if (vp[i].get_bdate().equals(today))
            cout << "Happy Birth Day " << vp[i].get_name() << "!\n";
}