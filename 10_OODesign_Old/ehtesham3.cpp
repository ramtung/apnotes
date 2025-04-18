#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

// Since we have not learned exception handling...
void error(string message) {
	cerr << message << endl;
	abort();
}

class Employee {
public:
	Employee(string id, string n) {
		if (id == "" || n == "") error("Employee ID and name cannot be empty");
		emp_id = id;
		name = n;
		bedehi = 0;
	}
private:
	int bedehi;
	string emp_id;
	string name;
};

class MenuItem {
public:
	MenuItem(string t, int p) {
		if (t == "") error("Menu item title cannot be empty");
		if (p <= 0) error("Menu item price must be positive");
		title = t;
		price = p;
	}
private:
	string title;
	int price;
};

class EmployeeRequest {
public:
	EmployeeRequest(Employee* e, MenuItem* m) {
		if (e == NULL || m == NULL) error("Employee request parameters must be non-null");
		item = m;
		emp = e;
	}
private:
	Employee* emp;
	MenuItem* item;
};

class Catering {
public:
	Catering(string n, vector<MenuItem> m) {
		name = n;
		menu = m;
	}
private:
	string name;
	vector<MenuItem> menu;
};

class Ehtesham {
public:
	Ehtesham(vector<Catering> c, vector<Employee> e) {
		caterings = c;
		employees = e;
	}
private:
	vector<Catering> caterings;
	vector<Employee> employees;
};

int main() {
	Ehtesham ehtesham(
		{
			Catering("Farsi", { MenuItem("Kabab", 50000), MenuItem("Jooj", 30000) }),
			Catering("Alaa", { MenuItem("Kabab", 40000), MenuItem("Maahi", 35000) })
		},
		{
			Employee("1001", "Jamshid"),
			Employee("1002", "Mahvash"),
			Employee("1003", "Hooshang")
		}
	);
}