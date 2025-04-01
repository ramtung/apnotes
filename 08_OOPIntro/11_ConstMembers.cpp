#include <iostream>
#include <stdexcept>
using namespace std;

class Date {
public:
  Date(int d, int m, int y);
  void setDate(int d, int m, int y);
  void printDate() const;
  void advanceByOneDay();
  bool equals(const Date& d) const;

  int getDay() const{ return day; }
  int getMonth() const { return month; }
  int getYear() const { return year; }
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

void Date::printDate() const {
  cout << day << '/' << month << '/' << year << endl;
}

bool Date::equals(const Date& d) const {
  return day == d.day && 
         month == d.month && 
         year == d.year;
}
                    
int daysBetween(Date d1, Date d2) {
  // Assuming that d1 is not later than d2
  int count = 1;
  while (!d1.equals(d2)) {
    d1.advanceByOneDay();
    count++;
  }
  return count;
}

int main() {
  const Date UTFoundationDay(8, 3, 1313);
  UTFoundationDay.printDate();
  // Compile error:
  // UTFoundationDay.advanceByOneDay();
  
  Date today(12, 1, 1404);
  cout << today.equals(UTFoundationDay) << endl;
  cout << daysBetween(UTFoundationDay, today) << endl;
}