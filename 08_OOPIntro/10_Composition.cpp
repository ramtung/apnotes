#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>
using namespace std;                                                          

class Date {
public:
  Date(int d, int m, int y);
  void setDate(int d, int m, int y);
  void printDate();
  void incOneDay();
  bool equals(Date d);
  bool sameDayOfYear(Date d);

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

void Date::incOneDay() {
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

bool Date::equals(Date d) {
  return day == d.day && 
         month == d.month && 
         year == d.year;
}

bool Date::sameDayOfYear(Date d) {
    return day == d.day && month == d.month;
}
                    
int daysBetween(Date d1, Date d2) {
    // Assuming that d1 is not later than d2
    int count = 1;
    while (!d1.equals(d2)) {
        d1.incOneDay();
        count++;
    }
    return count;
}

Date strToDate(string s) {
  //TODO: Handle formatting errors
  int slashPos = s.find('/');
  int d = atoi(s.substr(0, slashPos).c_str());
  s = s.substr(slashPos + 1);
  slashPos = s.find('/');
  int m = atoi(s.substr(0, slashPos).c_str());
  int y = atoi(s.substr(slashPos + 1).c_str());

  return Date(d, m, y);
}

class Person {
public:
  Person(string n, int d, int m, int y);
  Date getBirthDate() { return bdate; }
  string getName() { return name; }
private:
  string name;
  Date bdate; 
};

Person::Person(string n, int d, int m, int y)
    : bdate(d, m, y) {
  if (n == "")
    throw invalid_argument("Person's name is empty");
  name = n;
}

int main() {
  vector<Person> vp = {
    Person("gholam", 2, 7, 1370),
    Person("ghamar", 3, 12, 1368),
    Person("alaleh", 12, 2, 1360)
  };

  cout << "Today? ";
  string todayStr;
  cin >> todayStr;
  Date today = strToDate(todayStr);

  for (Person p : vp)
    if (p.getBirthDate().sameDayOfYear(today))
      cout << "Happy Birth Day " << p.getName() << "!\n";
}