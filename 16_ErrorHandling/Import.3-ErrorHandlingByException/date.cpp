#include <iostream>
#include "date.h"
using namespace std;

bool is_leap_year(int y) {
  int r = y % 33;
  return r==1 || r==5 || r==9 || r==13 || r==17 || r==22 || r==26 || r==30;
}

int days_of_month(int m, int y) {
  if (m < 7)
    return 31;
  else if (m < 12)
    return 30;
  else if (m == 12)
    return is_leap_year(y) ? 30 : 29;
  else
    throw invalid_argument("Invalid month number");
}

Date::Date(int d, int m, int y) {
  if (y < 0 || m < 1 || m > 12 || d < 1 || d > days_of_month(m, y))
    throw invalid_argument("Invalid arguments to Date constructor");

  day = d;
  month = m;
  year = y;
}

void Date::print() {
  cout << year << '/' << month << '/' << day;
}

Date read_date(istream& input) {
  int d, m, y;
  char ch;
  input >> d;
  input >> ch;
  if (ch != '/')
    throw invalid_argument("Slash separator expected");
  input >> m;
  input >> ch;
  if (ch != '/')
    throw invalid_argument("Slash separator expected");
  input >> y;
  return Date(d, m, y);
}