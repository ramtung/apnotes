#include <iostream>
#include <stdexcept>
using namespace std;

class Date {
public:
  Date(int d, int m, int y);
  void setDate(int d, int m, int y);
  void printDate();

  int getDay() { return day; }
  int getMonth() { return month; }
  int getYear() { return year; }
private:
  int day;
  int month;
  int year;
};

Date::Date(int d, int m, int y) {
  setDate(d, m, y);
}

void Date::setDate(int d, int m, int y) {
  if (y < 0 || m < 1 || m > 12 || d < 1 || 
      (m < 7 && d > 31) || 
      (m > 6 && m < 12 && d > 30) ||
      (m == 12 && d > 29)) // leap years not checked
    throw invalid_argument("Invalid date parameters");

  day = d;
  month = m;
  year = y;
}

void Date::printDate() {
  cout << day << '/' << month << '/' << year << endl;
}
                                      
int main() {
  Date bd(31, 6, 1352);
  bd.printDate();
  cout << bd.getDay() << endl;
}