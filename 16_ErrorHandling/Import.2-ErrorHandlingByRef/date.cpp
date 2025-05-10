#include <iostream>
#include <cstdlib>
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
    abort();
}

Date::Date(int d, int m, int y, int& result) {
  if (y < 0 || m < 1 || m > 12 || d < 1 || d > days_of_month(m, y)) {
    result = DATE_INVALID_ARGS;
    day = month = year = 1;
    return;
  }
  result = DATE_OK;
  day = d;
  month = m;
  year = y;
}

void Date::print() {
  cout << year << '/' << month << '/' << day;
}

Date read_date(istream& input, int& result) {
  int d, m, y;
  char ch;
  int constructor_result;
  input >> d;
  input >> ch;
  if (ch != '/') {
    result = DATE_INVALID_SEPARATOR;
    return Date(1,1,1, constructor_result);
  }
  input >> m;
  input >> ch;
  if (ch != '/') {
    result = DATE_INVALID_SEPARATOR;
    return Date(1,1,1, constructor_result);
  }
  input >> y;
  return Date(d, m, y, result);
}