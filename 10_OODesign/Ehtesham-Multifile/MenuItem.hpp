#ifndef __MENUITEM_HPP__
#define __MENUITEM_HPP__

#include <string>
#include <stdexcept>
using namespace std;

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
 
#endif
