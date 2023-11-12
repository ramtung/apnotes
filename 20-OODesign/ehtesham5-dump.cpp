#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <sstream>
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
	string get_id() { return emp_id; }
	string to_string() {
		ostringstream os;
		os << '[' << emp_id << "] " << name;
		return os.str();
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
	string get_title() { return title; }
	string to_string() {
		ostringstream os;
		os << title << '(' << price << ')';
		return os.str();
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
	string to_string() {
		ostringstream os;
		os << emp->to_string() << '\t' << item->to_string();
		return os.str();
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
	string get_name() { return name; }
	
	void add_employee_request(Employee* emp, string item_title) {
		requests.push_back(EmployeeRequest(emp, find_item_by_title(item_title)));
	}
	string to_string() {
		ostringstream os;
		os << "Requests placed for catering " << name << endl;
		for (EmployeeRequest request : requests)
			os << request.to_string() << endl;
		return os.str();
	}	
private:
	MenuItem* find_item_by_title(string item_title) {
		for (int i = 0; i < menu.size(); i++)
			if (menu[i].get_title() == item_title)
				return &menu[i];
		error("cannot find menu item");
	}

	string name;
	vector<MenuItem> menu;
	vector<EmployeeRequest> requests;
};

class Ehtesham {
public:
	Ehtesham(vector<Catering> c, vector<Employee> e) {
		caterings = c;
		employees = e;
	}
	string to_string() {
		ostringstream os;
		os << "Employees:" << endl;
		for (Employee employee : employees)
			os << employee.to_string() << endl;
		os << endl;
		for (Catering catering : caterings)
			os << catering.to_string() << endl;
		return os.str();
	}

	void add_employee_request(string empid, string catering_name, string item) {
		Catering* cat = find_catering_by_name(catering_name);
		Employee* emp = find_employee_by_id(empid);
		cat->add_employee_request(emp, item);
	}
private:
	Employee* find_employee_by_id(string empid) {
		for (int i = 0; i < employees.size(); i++)
			if (employees[i].get_id() == empid)
				return &employees[i];
		error("cannot find employee");
	}

	Catering* find_catering_by_name(string name) {
		for (int i = 0; i < caterings.size(); i++)
			if (caterings[i].get_name() == name)
				return &caterings[i];
		error("cannot find catering");
	}

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

	string command;
	while (cin >> command) {
		if (command == "request") {
			string empid;
			string catering;
			string item;

			cin >> empid >> catering >> item;
			ehtesham.add_employee_request(empid, catering, item);
		} else if (command == "dump") {
			cout << ehtesham.to_string() << endl;
		} else {
			error("unknown command");
		}
	}
}




