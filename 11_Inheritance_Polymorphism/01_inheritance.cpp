#include <iostream>
#include <string>
#include <regex>

using namespace std;

class Person {
public:
    Person(string name_, string nin_);
    string get_name() { return name; }
    string get_nin() { return nin; }
private:
    string name;
    string nin;
};

Person::Person(string name_, string nin_) {
    if (name_ == "" || nin_ == "")
        throw invalid_argument("empty string is not allowed as the name or NIN");
    name = name_;
    nin = nin_;
}

class Student : public Person {
public:
    Student(string n, string c, string sid);
    string get_id() { return student_id; }
private:
    string student_id;
};

Student::Student(string name_, string nin_, string student_id_)
        : Person(name_, nin_)
{
    if (regex_match(student_id_, regex("\\d{8}")))
        throw invalid_argument("Invalid student ID format");
    student_id = student_id_;
}

class Employee : public Person {
public:
    Employee(string name_, string nin_, string emp_code_, int base_salary_);
    string get_emp_code() { return emp_code; }
    int calc_salary(int hours_worked);
private:
    string emp_code;
    int base_salary;
};

Employee::Employee(string name_, string nin_, string emp_code_, int base_salary_)
        : Person(name_, nin_)
{
    emp_code = emp_code_;
}

int Employee::calc_salary(int hours_worked)
{
    int hourly_pay = base_salary / 240;
    return base_salary + (hours_worked - 240) * hourly_pay * 1.4;
}

int main()
{
    Student s("gholam", "0123456789", "810188123");
    cout << s.get_name() << endl;

    Employee e("ghamar", "1234567890", "1234", 2000000);
    cout << e.calc_salary(263) << endl;
}