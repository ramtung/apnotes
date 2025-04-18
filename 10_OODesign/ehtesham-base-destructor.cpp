#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <stdexcept>
using namespace std;

class Employee {
public:
  Employee(string emp_id, string name) {
    if (emp_id.empty() || name.empty())
      throw invalid_argument("Employee ID and name cannot be empty");
    emp_id_ = emp_id;
    name_ = name;
  }
private:
  string emp_id_;
  string name_;
};

class MenuItem {
public:
  MenuItem(string title, int price) {
    if (title.empty()) 
      throw invalid_argument("Menu item title cannot be empty");
    if (price <= 0) 
      throw invalid_argument("Menu item price must be positive");
    title_ = title;
    price_ = price;
  }
private:
  string title_;
  int price_;
};

class Catering {
public:
  Catering(string name, vector<MenuItem*> menu) {
    name_ = name;
    menu_ = menu;
  }
  ~Catering() {
    for (auto menu_item : menu_)
      delete menu_item;
  }
private:
  string name_;
  vector<MenuItem*> menu_;
};

class Ehtesham {
public:
  Ehtesham(string emp_filename, string cat_filename) {
    ReadEmployees(emp_filename);
    ReadCaterings(cat_filename);
  }
  ~Ehtesham() {
    for (auto emp : employees_)
      delete emp;
    for (auto cat : caterings_)
      delete cat;
  }

private:
  void ReadEmployees(string emp_filename) {
    ifstream emp_file(emp_filename);
    string line;
    while (getline(emp_file, line)) {
      string emp_id;
      string emp_name;
      istringstream(line) >> emp_id >> emp_name;
      employees_.push_back(new Employee(emp_id, emp_name));
    }
  }

  void ReadCaterings(string cat_filename) {
    ifstream cat_file(cat_filename);
    string line;
    while (getline(cat_file, line)) {
      string cat_name;
      string item_title;
      int item_price;
      vector<MenuItem*> menu;
      
      istringstream iss(line);
      iss >> cat_name;
      while (iss >> item_title >> item_price)
        menu.push_back(new MenuItem(item_title, item_price));
      caterings_.push_back(new Catering(cat_name, menu));
    }
  }

  vector<Catering*> caterings_;
  vector<Employee*> employees_;
};

int main() {
  Ehtesham ehtesham("employees.txt", "caterings.txt");
}