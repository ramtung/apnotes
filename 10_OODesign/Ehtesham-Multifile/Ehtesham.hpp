#ifndef __EHTESHAM_HPP__
#define __EHTESHAM_HPP__

#include <string>
#include <vector>
#include <memory>
#include <stdexcept>
using namespace std;

#include "Employee.hpp"
#include "Catering.hpp"
#include "CateringOrder.hpp"

class Ehtesham {
  public:
   Ehtesham(string emp_filename, string cat_filename) {
     ReadEmployees(emp_filename);
     ReadCaterings(cat_filename);
   }
   void TakeEmployeeOrder(string emp_id, string cat_name, string item_title, int quantity);
   CateringOrder GenCateringOrder(string cat_name);
   void HandleDelivery(string cat_name, int delivery_cost);
   string BedehiReport();
 
 private:
   void ReadEmployees(string emp_filename);
   void ReadCaterings(string cat_filename);
   shared_ptr<Employee> FindEmployeeById(string emp_id);
   shared_ptr<Catering> FindCateringByName(string cat_name);

   vector<shared_ptr<Catering>> caterings_;
   vector<shared_ptr<Employee>> employees_;
 };
        
#endif