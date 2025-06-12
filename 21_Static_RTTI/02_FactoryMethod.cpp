#include <string>
#include <sstream>
using namespace std;

class Date {
public:
  Date(int d, int m, int y);
  static Date fromString(string date_str);
  static Date today();
  
  int getDay() { return day; }
  int getMonth() { return month; }
  int getYear() { return year; }
private:
  int day;
  int month;
  int year;
};

Date Date::fromString(string date_str) {
  // Convers a string of the form yyyy/mm/dd to Date
  // Assumes the date format is correct
  istringstream ss(date_str);
  int d, m, y;
  char sep;
  ss >> y >> sep >> m >> sep >> d;
  return Date(d, m, y);
}

Date Date::today() {
  int d, m, y;
  // calculate today's date in d, m, y  
  return Date(d, m, y);
}
                                      
int main() {
  Date aDay = Date::fromString("1380/04/12");
  int thisMonth = Date::today().getMonth();
}