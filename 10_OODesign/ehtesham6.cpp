#include <iostream>
#include <vector>
#include <set>
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
	int get_bedehi() { return bedehi; }

	void charge(int amount) {
		bedehi += amount;
	}

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
	int get_price() { return price; }
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
	MenuItem* get_item() { return item; }
	Employee* get_employee() { return emp; }
	string to_string() {
		ostringstream os;
		os << emp->to_string() << '\t' << item->to_string();
		return os.str();
	}
private:
	Employee* emp;
	MenuItem* item;
};

class CateringOrderLine {
public:
	CateringOrderLine(MenuItem* m, int q = 1) {
		item = m;
		quantity = q;
	}
	MenuItem* get_item() { return item; }

	void increase_quantity(int q = 1) { quantity += q; }

	string to_string() {
		ostringstream os;
		os << item->to_string() << " " << quantity;
		return os.str();
	}
private:
	MenuItem* item;
	int quantity;
};

class CateringOrder {
public:
	void add_employee_request(EmployeeRequest req) {
		for (CateringOrderLine& line : orderLines)
			if (line.get_item() == req.get_item()) {
				line.increase_quantity();
				return;
			}
		orderLines.push_back(CateringOrderLine(req.get_item()));
	}
	string to_string() { 
		ostringstream os;
		for (CateringOrderLine line : orderLines)
			os << '\t' << line.to_string() << endl;
		return os.str();
	}
private:
	vector<CateringOrderLine> orderLines;
};

class Catering {
public:
	Catering(string n, vector<MenuItem> m) {
		name = n;
		menu = m;
	}
	string get_name() { return name; }
	string to_string() {
		ostringstream os;
		os << "Requests placed for catering " << name << endl;
		for (EmployeeRequest request : requests)
			os << request.to_string() << endl;
		return os.str();
	}
	void add_employee_request(Employee* emp, string item_title) {
		requests.push_back(EmployeeRequest(emp, find_item_by_title(item_title)));
	}

	CateringOrder gen_catering_order() {
		CateringOrder order;
		for (EmployeeRequest req : requests) {
			order.add_employee_request(req);
		}
		return order;
	}



	void delivered(int delivery_cost) {
		set<Employee*> employees;
		for (EmployeeRequest request : requests) {
			Employee* emp = request.get_employee();
			emp->charge(request.get_item()->get_price());
			employees.insert(emp);
		}
		for (Employee* emp : employees)
			emp->charge(delivery_cost / employees.size());
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



	CateringOrder gen_catering_order(string catering_name) {
		Catering* cat = find_catering_by_name(catering_name);
		return cat->gen_catering_order();
	}



	void delivery_from(string catering_name, int delivery_cost) {
		Catering* cat = find_catering_by_name(catering_name);
		cat->delivered(delivery_cost);
	}
	string bedehi_report() {
		ostringstream os;
		for (Employee emp : employees) {
			os << emp.to_string() << "\t" << emp.get_bedehi() << endl;
		}
		return os.str();
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

			cout << "Request from employee " << empid << " handled!" << endl << endl;

		} else if (command == "catorder") {
			string catering_name;
			cin >> catering_name;
			CateringOrder order = ehtesham.gen_catering_order(catering_name);
			cout << "Order for catering " << catering_name << ":\n";
			cout << order.to_string() << endl;

		} else if (command == "delivery") {
			string catering_name;
			int delivery_cost;

			cin >> catering_name;
			cin >> delivery_cost;
			ehtesham.delivery_from(catering_name, delivery_cost);
			cout << "Delivery from " << catering_name << " handled!" << endl << endl;
		} else if (command == "bedehi") {
			cout << "Bedehi Report: " << endl << ehtesham.bedehi_report() << endl;
		} else if (command == "dump") {
			cout << ehtesham.to_string() << endl;
		} else {
			cerr << "unknown command\n";
			abort();
		}
	}
}