#include <iostream>
#include <string>
using namespace std;

class Person {
public:
	Person(string n, string c) : name(n), nat_code(c) {}

	string get_name() { return name; }
	string get_nat_code() { return nat_code; }
private:
	string name;
	string nat_code;
};

class Student : public Person {
public:
	Student(string n, string c, string sid)
		: Person(n, c),
		student_id(sid) {}

	string get_id() { return student_id; }
private:
	string student_id;
};

class Employee : public Person {
public:
	Employee(string n, string c, string ec, int bs)
		: Person(n, c), emp_code(ec), base_salary(bs) {}

	string get_emp_code() { return emp_code; }
	
	int calc_salary(int hours_worked) {
		int hourly_pay = base_salary / 240;
		return base_salary + (hours_worked - 240) * hourly_pay * 1.4;
	}
private:
	string emp_code;
	int base_salary;
};

class Prefessor : public Employee {
public:
	Prefessor(string n, string c, string ec, int bs, int ut)
		: Employee(n, c, ec, bs), units_taught(ut) {}

	int calc_salary(int hours_worked) {
		int extra_units = units_taught - 10;
		return Employee::calc_salary(hours_worked) + extra_units * 100000;
	}
private:
	int units_taught;
};

int main()
{
	Prefessor f("ghodrat", "333333", "1235", 800000, 13);
	cout << f.get_name() << endl;
	cout << f.calc_salary(263) << endl;
	
}