#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <memory>
#include <stdexcept>
using namespace std;

class Employee {
 public:
  Employee(string emp_id, string name) {
    if (emp_id == "" || name == "")
      throw invalid_argument("Employee ID and name cannot be empty");
    emp_id_ = emp_id;
    name_ = name;
    bedehi_ = 0;
  }
  string get_id() const { return emp_id_; }
  string get_name() const { return name_; }
  int get_bedehi() const { return bedehi_; }

  void Charge(int amount) { bedehi_ += amount; }

private:
  string emp_id_;
  string name_;
  int bedehi_;
};

class MenuItem {
 public:
  MenuItem(string title, int price) {
    if (title == "") 
      throw invalid_argument("Menu item title cannot be empty");
    if (price <= 0) 
      throw invalid_argument("Menu item price must be positive");
    title_ = title;
    price_ = price;
  }
  string get_title() const { return title_; }
  int get_price() const { return price_; }

private:
  string title_;
  int price_;
};

class EmployeeOrder {
public:
  EmployeeOrder(shared_ptr<Employee> employee, shared_ptr<MenuItem> item, int quantity=1) {
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

class CateringOrderLine {
public:
  CateringOrderLine(shared_ptr<MenuItem> menu_item, int quantity = 1) {
    menu_item_ = menu_item;
    quantity_ = quantity;
  }
  shared_ptr<MenuItem> get_menu_item() const { return menu_item_; }
  int get_quantity() const { return quantity_; }

  void IncreaseQuantity(int quantity = 1) { quantity_ += quantity; }

private:
  shared_ptr<MenuItem> menu_item_;
  int quantity_;
};

class CateringOrder {
public:
  string to_string() const {
    ostringstream os;
    for (auto line : orderLines_) {
      os << line->get_menu_item()->get_title() << "\t" 
         << line->get_menu_item()->get_price() << "\t" 
         << line->get_quantity() << "\t" 
         << line->get_menu_item()->get_price() * line->get_quantity() << endl;
    }
    return os.str();
  }

  void AddEmployeeOrder(shared_ptr<EmployeeOrder> emp_order) {
    for (auto line : orderLines_)
      if (line->get_menu_item() == emp_order->get_menu_item()) {
        line->IncreaseQuantity(emp_order->get_quantity());
        return;
      }
    orderLines_.push_back(make_shared<CateringOrderLine>(emp_order->get_menu_item()));
  }
private:
  vector<shared_ptr<CateringOrderLine>> orderLines_;
};

class Catering {
public:
  Catering(string name, vector<shared_ptr<MenuItem>> menu) {
    name_ = name;
    menu_ = menu;
  }
  string get_name() const { return name_; }
  
  void TakeEmployeeOrder(shared_ptr<Employee> emp, string item_title) {
    employee_orders_.push_back(make_shared<EmployeeOrder>(emp, FindItemByTitle(item_title)));
  }
  CateringOrder GenCateringOrder() const {
    CateringOrder order;
    for (const auto& emp_order : employee_orders_) {
      order.AddEmployeeOrder(emp_order);
    }
    return order;
  }
  void HandleDelivery(int delivery_cost) const {
    set<shared_ptr<Employee>> employees;
    for (const auto& emp_order : employee_orders_) {
      shared_ptr<Employee> emp = emp_order->get_employee();
      emp->Charge(emp_order->get_menu_item()->get_price());
      employees.insert(emp);
    }
    for (const auto& emp : employees)
      emp->Charge(delivery_cost / employees.size());
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
  void TakeEmployeeOrder(string emp_id, string catering_name, string item_title) {
    shared_ptr<Catering> cat = FindCateringByName(catering_name);
    shared_ptr<Employee> emp = FindEmployeeById(emp_id);
    cat->TakeEmployeeOrder(emp, item_title);
  }
  CateringOrder GenCateringOrder(string catering_name) {
    shared_ptr<Catering> cat = FindCateringByName(catering_name);
    return cat->GenCateringOrder();
  }
  void HandleDelivery(string catering_name, int delivery_cost) {
    shared_ptr<Catering> cat = FindCateringByName(catering_name);
    cat->HandleDelivery(delivery_cost);
  }
  string BedehiReport() {
    ostringstream os;
    for (const shared_ptr<Employee> emp : employees_) {
      os << emp->get_name() << "\t" << emp->get_bedehi() << endl;
    }
    return os.str();
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

  string command;
  while (cin >> command) {
    if (command == "emporder") {
      string empid;
      string catering_name;
      string item_title;
      cin >> empid >> catering_name >> item_title;
      ehtesham.TakeEmployeeOrder(empid, catering_name, item_title);

      cout << "Order from employee " << empid << " handled!" << endl << endl;
    } else if (command == "catorder") {
      string catering_name;
      cin >> catering_name;

      CateringOrder order = ehtesham.GenCateringOrder(catering_name);

      cout << "Order for catering " << catering_name << " placed:\n";
      cout << order.to_string() << endl;
    } else if (command == "delivery") {
      string catering_name;
      int delivery_cost;
      cin >> catering_name;
      cin >> delivery_cost;

      ehtesham.HandleDelivery(catering_name, delivery_cost);

      cout << "Delivery from " << catering_name << " handled!" << endl << endl;
    } else if (command == "bedehi") {
      cout << "Bedehi Report: " << endl << ehtesham.BedehiReport() << endl;
    } else {
      cerr << "unknown command: " << command << endl;
    }
  }
}