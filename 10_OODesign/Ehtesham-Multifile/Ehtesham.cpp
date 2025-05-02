#include <string>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <memory>
#include <stdexcept>
using namespace std;

#include "Ehtesham.hpp"

void Ehtesham::TakeEmployeeOrder(string emp_id, string cat_name, string item_title, int quantity) {
  shared_ptr<Catering> cat = FindCateringByName(cat_name);
  shared_ptr<Employee> emp = FindEmployeeById(emp_id);
  cat->TakeEmployeeOrder(emp, item_title, quantity);
}

CateringOrder Ehtesham::GenCateringOrder(string cat_name) {
  shared_ptr<Catering> cat = FindCateringByName(cat_name);
  return cat->GenCateringOrder();
}

void Ehtesham::HandleDelivery(string cat_name, int delivery_cost) {
  shared_ptr<Catering> cat = FindCateringByName(cat_name);
  cat->HandleDelivery(delivery_cost);
}

string Ehtesham::BedehiReport() {
  ostringstream os;
  for (const shared_ptr<Employee> emp : employees_) {
    os << emp->get_name() << "\t" << emp->get_bedehi() << endl;
  }
  return os.str();
}

void Ehtesham::ReadEmployees(string emp_filename) {
  ifstream emp_file(emp_filename);
  string line;
  while (getline(emp_file, line)) {
    string emp_id;
    string emp_name;
    istringstream(line) >> emp_id >> emp_name;
    employees_.push_back(make_shared<Employee>(emp_id, emp_name));
  }
}

void Ehtesham::ReadCaterings(string cat_filename) {
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

shared_ptr<Employee> Ehtesham::FindEmployeeById(string emp_id) {
  auto it = find_if(employees_.begin(), employees_.end(), [=](auto emp) { 
    return emp->get_id() == emp_id; 
  });
  if (it != employees_.end())
    return *it;
  throw invalid_argument("Unknown employee id");
}

shared_ptr<Catering> Ehtesham::FindCateringByName(string cat_name) {
  auto it = find_if(caterings_.begin(), caterings_.end(), [=](auto cat) { 
    return cat->get_name() == cat_name; 
  });
  if (it != caterings_.end())
    return *it;
  throw invalid_argument("Unknown catering name");
}
