#include <iostream>
#include <string>
#include <regex>
using namespace std;

class Person {
public:
  Person(string name, string nin);
  string name() { return name_; }
  string nin() { return nin_; }
private:
  string name_;
  string nin_;
};

Person::Person(string name, string nin) {
  if (name == "" || nin == "")
    throw invalid_argument("empty string is not allowed as the name or NIN");
  name_ = name;
  nin_ = nin;
}

class Student : public Person {
public:
  Student(string name, string nin, string student_id);
  string student_id() { return student_id_; }
private:
  string student_id_;
};

Student::Student(string name, string nin, string student_id)
    : Person(name, nin)
{
  if (regex_match(student_id, regex("\\d{8}")))
    throw invalid_argument("Invalid student ID format");
  student_id_ = student_id;
}

class Employee : public Person {
public:
  Employee(string name, string nin, string emp_code, int base_salary);
  string emp_code() { return emp_code_; }
  int CalcSalary(int hours_worked);
private:
  string emp_code_;
  int base_salary_;
};

Employee::Employee(string name, string nin, string emp_code, int base_salary)
    : Person(name, nin)
{
  emp_code_ = emp_code;
}

int Employee::CalcSalary(int hours_worked) {
  int hourly_pay = base_salary_ / 240;
  return base_salary_ + (hours_worked - 240) * hourly_pay * 1.4;
}
  
class Professor : public Employee {
public:
  Professor(string name, string nin, string emp_code, int base_salary, int teaching_units);
  int CalcSalary(int hours_worked);
private:
  int teaching_units_;
};

int Professor::CalcSalary(int hours_worked)  {
  int extra_units = teaching_units_ - 10;
  return Employee::CalcSalary(hours_worked) + extra_units * 100000;
}

Professor::Professor(string name, string nin,
           string emp_code, int base_salary,
           int teaching_units)
    : Employee(name, nin, emp_code, base_salary)
{
  if (teaching_units < 0)
    throw invalid_argument("teaching units cannot be negative");
  teaching_units_ = teaching_units;
}

int main() {
  Professor f("ghodrat", "333333", "1235", 800000, 13);
  cout << f.name() << endl;
  cout << f.CalcSalary(263) << endl;
}