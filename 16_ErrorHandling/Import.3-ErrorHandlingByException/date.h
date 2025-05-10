#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date {
public:
  Date(int d, int m, int y);
  void print();
private:
  int day;
  int month;
  int year;
};

Date read_date(istream& input);

#endif //DATE_H
