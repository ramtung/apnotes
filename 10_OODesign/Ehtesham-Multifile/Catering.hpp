#ifndef __CATERING_HPP__
#define __CATERING_HPP__

#include <string>
#include <sstream>
#include <vector>
#include <set>
#include <algorithm>
#include <memory>
#include <stdexcept>
using namespace std;

#include "MenuItem.hpp"
#include "EmployeeOrder.hpp"
#include "CateringOrder.hpp"

class Catering {
public:
  Catering(string name, vector<shared_ptr<MenuItem>> menu) {
    name_ = name;
    menu_ = menu;
  }
  string get_name() const { return name_; }
  
  void TakeEmployeeOrder(shared_ptr<Employee> emp, string item_title, int quantity);
  CateringOrder GenCateringOrder() const;
  void HandleDelivery(int delivery_cost) const;
private:
  shared_ptr<MenuItem> FindItemByTitle(string item_title);

  string name_;
  vector<shared_ptr<MenuItem>> menu_;
  vector<shared_ptr<EmployeeOrder>> employee_orders_;
};
       
#endif
