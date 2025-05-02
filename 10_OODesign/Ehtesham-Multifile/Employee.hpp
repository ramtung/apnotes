#ifndef __EMPLOYEE_HPP__
#define __EMPLOYEE_HPP__

#include <string>
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

#endif
