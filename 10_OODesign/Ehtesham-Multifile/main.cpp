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

#include "Ehtesham.hpp"
#include "CateringOrder.hpp"

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
    } else if (command == "catorder") {
      string cat_name;
      cmdin >> cat_name;

      CateringOrder cat_order = ehtesham.GenCateringOrder(cat_name);

      cout << "Order for catering " << cat_name << " placed:\n";
      cout << cat_order.to_string() << endl;
    } else if (command == "delivery") {
      string cat_name;
      int delivery_cost;
      cmdin >> cat_name;
      cmdin >> delivery_cost;

      ehtesham.HandleDelivery(cat_name, delivery_cost);

      cout << "Delivery from " << cat_name << " handled!" << endl << endl;
    } else if (command == "bedehi") {
      cout << "Bedehi Report: " << endl << ehtesham.BedehiReport() << endl;
    } else {
      cerr << "unknown command: " << command << endl;
    }
  }
}