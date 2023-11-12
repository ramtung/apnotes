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

class Catering {
public:
	Catering(string n, vector<MenuItem> m) {
		if (n == "") error("Catering name must be non-empty");
		name = n;
		menu = m;
	}
private:
	string name;
	vector<MenuItem> menu;
};

int main() {
	Catering farsi("Farsi", { MenuItem("Kabab", 50000), MenuItem("Jooj", 30000) });
	Catering alaa("Alaa", { MenuItem("Kabab", 40000), MenuItem("Maahi", 35000) });
	Employee jamshid("1001", "Jamshid");
	Employee mahvash("1002", "Mahvash");
	Employee hooshang("1003", "Hooshang");
}