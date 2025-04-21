#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>
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
  string get_id() const { return emp_id_; }

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
  string get_title() const { return title_; }

private:
  string title_;
  int price_;
};

class EmployeeOrder {
public:
  EmployeeOrder(shared_ptr<Employee> employee, shared_ptr<MenuItem> item, int quantity) {
    if (employee == nullptr || item == nullptr)
      throw invalid_argument("Employee order parameters must be non-null");
    if (quantity <= 0)
      throw invalid_argument("Employee order quantity must be at least one");
    item_ = item;
    employee_ = employee;
    quantity_ = quantity;
  }
  shared_ptr<MenuItem> get_menu_item() const { return item_; }
  shared_ptr<Employee> get_employee() const { return employee_; } 
  int get_quantity() const { return quantity_; }

private:
  shared_ptr<Employee> employee_;
  shared_ptr<MenuItem> item_;
  int quantity_;
};

class Catering {
public:
  Catering(string name, vector<shared_ptr<MenuItem>> menu) {
    name_ = name;
    menu_ = menu;
  }
  string get_name() const { return name_; }

  void TakeEmployeeOrder(shared_ptr<Employee> emp, string item_title, int quantity) {
    employee_orders_.push_back(make_shared<EmployeeOrder>(emp, FindItemByTitle(item_title), quantity));
  }

private:
  shared_ptr<MenuItem> FindItemByTitle(string item_title) {
    auto it = find_if(menu_.begin(), menu_.end(), [=](auto item) { 
      return item->get_title() == item_title; 
    });
    if (it != menu_.end())
      return *it;
    throw logic_error("Menu item does not exist");
  }

  string name_;
  vector<shared_ptr<MenuItem>> menu_;
  vector<shared_ptr<EmployeeOrder>> employee_orders_;
};

class Ehtesham {
public:
  Ehtesham(string emp_filename, string cat_filename) {
    ReadEmployees(emp_filename);
    ReadCaterings(cat_filename);
  }

  void TakeEmployeeOrder(string emp_id, string cat_name, string item_title, int quantity) {
    shared_ptr<Catering> cat = FindCateringByName(cat_name);
    shared_ptr<Employee> emp = FindEmployeeById(emp_id);
    cat->TakeEmployeeOrder(emp, item_title, quantity);
  }

private:
  void ReadEmployees(string emp_filename) {
    ifstream emp_file(emp_filename);
    string line;
    while (getline(emp_file, line)) {
      string emp_id;
      string emp_name;
      istringstream(line) >> emp_id >> emp_name;
      employees_.push_back(make_shared<Employee>(emp_id, emp_name));
    }
  }

  void ReadCaterings(string cat_filename) {
    ifstream cat_file(cat_filename);
    string line;
    while (getline(cat_file, line)) {
      string cat_name;
      string item_title;
      int item_price;
      vector<shared_ptr<MenuItem>> menu;
      
      istringstream iss(line);
      iss >> cat_name;
      while (iss >> item_title >> item_price)
        menu.push_back(make_shared<MenuItem>(item_title, item_price));
      caterings_.push_back(make_shared<Catering>(cat_name, menu));
    }
  }

  shared_ptr<Employee> FindEmployeeById(string emp_id) {
    auto it = find_if(employees_.begin(), employees_.end(), [=](auto emp) { 
      return emp->get_id() == emp_id; 
    });
    if (it != employees_.end())
      return *it;
    throw invalid_argument("Unknown employee id");
  }

  shared_ptr<Catering> FindCateringByName(string cat_name) {
    auto it = find_if(caterings_.begin(), caterings_.end(), [=](auto cat) { 
      return cat->get_name() == cat_name; 
    });
    if (it != caterings_.end())
      return *it;
    throw invalid_argument("Unknown catering name");
  }

  vector<shared_ptr<Catering>> caterings_;
  vector<shared_ptr<Employee>> employees_;
};

int main() {
  Ehtesham ehtesham("employees.txt", "caterings.txt");

  string line;
  while (getline(cin, line)) {
    istringstream cmdin(line);
    string command;
    cmdin >> command;
    if (command == "emporder") {
      string empid;
      string cat_name;
      string item_title;
      int quantity;
      cmdin >> empid >> cat_name >> item_title >> quantity;
      ehtesham.TakeEmployeeOrder(empid, cat_name, item_title, quantity);

      cout << "Order from employee " << empid << " handled!" << endl << endl;
    } else {
      cerr << "unknown command: " << command << endl;
    }
  }
}