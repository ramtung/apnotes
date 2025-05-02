#include "CateringOrder.hpp"

string CateringOrder::to_string() const {
  ostringstream os;
  for (auto line : orderLines_) {
    os << line->get_menu_item()->get_title() << "\t" 
        << line->get_menu_item()->get_price() << "\t" 
        << line->get_quantity() << "\t" 
        << line->get_menu_item()->get_price() * line->get_quantity() << endl;
  }
  return os.str();
}

void CateringOrder::AddEmployeeOrder(shared_ptr<EmployeeOrder> emp_order) {
  for (auto line : orderLines_)
    if (line->get_menu_item() == emp_order->get_menu_item()) {
      line->IncreaseQuantity(emp_order->get_quantity());
      return;
    }
  orderLines_.push_back(make_shared<CateringOrderLine>(emp_order->get_menu_item(), emp_order->get_quantity()));
}
