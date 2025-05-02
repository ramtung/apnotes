#include <set>
#include <algorithm>
#include <stdexcept>
using namespace std;

#include "Catering.hpp"

void Catering::TakeEmployeeOrder(shared_ptr<Employee> emp, string item_title, int quantity) {
  employee_orders_.push_back(make_shared<EmployeeOrder>(emp, FindItemByTitle(item_title), quantity));
}

CateringOrder Catering::GenCateringOrder() const {
  CateringOrder order;
  for (const auto& emp_order : employee_orders_) {
    order.AddEmployeeOrder(emp_order);
  }
  return order;
}

void Catering::HandleDelivery(int delivery_cost) const {
  set<shared_ptr<Employee>> employees;
  for (auto emp_order : employee_orders_) {
    shared_ptr<Employee> emp = emp_order->get_employee();
    emp->Charge(emp_order->Total());
    employees.insert(emp);
  }
  for (auto emp : employees) {
    emp->Charge(delivery_cost / employees.size());
  }
}

shared_ptr<MenuItem> Catering::FindItemByTitle(string item_title) {
  auto it = find_if(menu_.begin(), menu_.end(), [=](auto item) { 
    return item->get_title() == item_title; 
  });
  if (it != menu_.end())
    return *it;
  throw logic_error("Menu item does not exist");
}
