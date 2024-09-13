#ifndef DATE_H
#define DATE_H

#include <fstream>
using namespace std;

const int DATE_OK = 0;
const int DATE_INVALID_SEPARATOR = -1;
const int DATE_INVALID_ARGS = -2;

class Date {
public:
    Date(int d, int m, int y, int& result);
    void print();
private:
    int day;
    int month;
    int year;
};

Date read_date(ifstream& input, int& error);

#endif //DATE_H
