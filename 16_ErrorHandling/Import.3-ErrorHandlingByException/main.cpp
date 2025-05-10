#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "date.h"
using namespace std;

const int STUDENT_OK = 0;
const int STUDENT_ERROR = -1;

class Student 
{
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
Student read_student(ifstream& input);
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
    try {
      Student s = read_student(input);
      students.push_back(s);
    } catch (invalid_argument& ex) {
      input.clear();
      string to_be_ignored;
      getline(input, to_be_ignored);
    }
  }
  input.close();
}

Student read_student(ifstream& input) {
  string name;
  input >> name;
  Date bdate = read_date(input);
  return Student(name, bdate);
}