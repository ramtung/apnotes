#ifndef __CATERINGORDER_HPP__
#define __CATERINGORDER_HPP__

#include <string>
#include <sstream>
#include <vector>
#include <memory>
#include <stdexcept>
using namespace std;

#include "MenuItem.hpp"
#include "EmployeeOrder.hpp"


class CateringOrderLine {
public:
  CateringOrderLine(shared_ptr<MenuItem> menu_item, int quantity) {
    menu_item_ = menu_item;
    quantity_ = quantity;
  }
  shared_ptr<MenuItem> get_menu_item() const { return menu_item_; }
  int get_quantity() const { return quantity_; }

  void IncreaseQuantity(int quantity) { quantity_ += quantity; }

private:
  shared_ptr<MenuItem> menu_item_;
  int quantity_;
};

class CateringOrder {
public:
  string to_string() const;
  void AddEmployeeOrder(shared_ptr<EmployeeOrder> emp_order);
private:
  vector<shared_ptr<CateringOrderLine>> orderLines_;
};
     
#endif
