#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "date.h"
using namespace std;

const int STUDENT_OK = 0;
const int STUDENT_ERROR = -1;

class Student {
public:
  Student(string n, Date bd);
  void print();
  // other methods
private:
  string name_;
  Date bdate_;
  // other fields
};

Student::Student(string name, Date bdate) 
  : name_(name), bdate_(bdate) {}

void Student::print() { 
  cout << name_ << '\t'; 
  bdate_.print(); 
}

void do_some_processing(vector<Student>& students);
Student read_student(ifstream& input, int& result);
void read_student_info(char* filename, vector<Student>& students) ;

int main(int argc, char* argv[]) {
  vector<Student> students;
  read_student_info(argv[1], students);
  do_some_processing(students);
}

void do_some_processing(vector<Student>& students) {
  for (auto student : students) {
    student.print();
    cout << endl;
  }
}

void read_student_info(char* filename, vector<Student>& students) {
  ifstream input(filename);
  int count;
  input >> count;
  for (int i = 0; i < count; i++) {
    int std_result;
    Student s = read_student(input, std_result);
    if (std_result == STUDENT_OK)
      students.push_back(s);
    else {
      input.clear();
      string to_be_ignored;
      getline(input, to_be_ignored);
    }
  }
  input.close();
}

Student read_student(ifstream& input, int& result) {
  string name;
  input >> name;
  int date_result;
  Date bdate = read_date(input, date_result);
  if (date_result != DATE_OK) {
    result = STUDENT_ERROR;
    return Student("", bdate);
  }
  result = STUDENT_OK;
  return Student(name, bdate);
}