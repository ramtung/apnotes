#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class Date {
public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}
    void print() { cout << day << '/' << month << '/' << year; } 
private:
    int day, month, year;
};

class Student {
public:
    Student(string n, Date bd) : name(n), bdate(bd) {}
    void print() { cout << name << '\t'; bdate.print(); }
private:
    string name;
    Date bdate;
};

Date read_date(ifstream& input) {
    int d, m, y;
    char ch;
    input >> d >> ch >> m >> ch >> y;
    return Date(d, m, y);
}

Student read_student(ifstream& input) {
    string name;
    input >> name;
    Date bdate = read_date(input);
    return Student(name, bdate);
}

void read_student_info(char* filename, vector<Student>& v) {
    ifstream input(filename);
    int count;
    input >> count;
    for (int i = 0; i < count; i++) {
        Student s = read_student(input);
        v.push_back(s);
    }
    input.close();
}

void do_some_processing(vector<Student>& v) {
    for (int i = 0; i < v.size(); i++) {
        v[i].print();
        cout << endl;
    }
}

int main(int argc, char* argv[]) {
    vector<Student> students;
    read_student_info(argv[1], students);
    do_some_processing(students);
}