#include <iostream>
#include <stdexcept>
using namespace std;

class Date {
public:
  Date(int d, int m, int y);
  void setDate(int d, int m, int y);
  void printDate();
  void advanceByOneDay();

  int getDay() { return day; }
  int getMonth() { return month; }
  int getYear() { return year; }
private:
  int day;
  int month;
  int year;
};

bool isLeapYear(int year) {
  int r = year % 33;
  return r==1 || r==5 || r==9 || r==13 || r==17 || r==22 || r==26 || r==30;
}

int daysOfMonth(int m, int y) {
  if (m < 7)
    return 31;
  else if (m < 12)
    return 30;
  else if (m == 12)
    return isLeapYear(y) ? 30 : 29;
  else  
    throw invalid_argument("Invalid date parameters");
}

Date::Date(int d, int m, int y) {
  setDate(d, m, y);
}

void Date::setDate(int d, int m, int y) {
  if (y < 0 || m < 1 || m > 12 || d < 1 || d > daysOfMonth(m, y))
    throw invalid_argument("Invalid date parameters");

  day = d;
  month = m;
  year = y;
}

void Date::advanceByOneDay() {
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

void Date::printDate() {
  cout << day << '/' << month << '/' << year << endl;
}
                    
int main() {
  Date bd(31, 6, 1352);
  bd.advanceByOneDay();
  bd.printDate();
}
