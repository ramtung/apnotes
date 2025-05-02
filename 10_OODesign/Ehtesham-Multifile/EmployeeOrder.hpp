#ifndef __EMPLOYEEORDER_HPP__
#define __EMPLOYEEORDER_HPP__

#include <string>
#include <memory>
#include <stdexcept>
using namespace std;

#include "MenuItem.hpp"
#include "Employee.hpp"


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

  int Total() const { return quantity_ * item_->get_price(); }

private:
  shared_ptr<Employee> employee_;
  shared_ptr<MenuItem> item_;
  int quantity_;
};
   
#endif
