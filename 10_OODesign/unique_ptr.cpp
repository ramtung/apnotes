#include <iostream>
#include <string>
#include <memory>
using namespace std;

class Employee {
public:
  Employee(string emp_id, string name) {
    if (emp_id == "" || name == "")
      throw invalid_argument("Employee ID and name cannot be empty");
    emp_id_ = emp_id;
    name_ = name;
  }
  string get_id() const { return emp_id_; }
  string get_name() const { return name_; }
private:
  string emp_id_;
  string name_;
};
 
int main() {
  unique_ptr<Employee> p(new Employee("1001", "Jamshid"));
  // Alternative syntax:
  // unique_ptr<Employee> p = make_unique<Employee>("1001", "Jamshid");

  // De-reference like an ordinary pointer
  cout << p->get_name() << endl;

  // Compile error: only one unique_ptr can point to Jamshid
  // unique_ptr<Employee> q = p;
  unique_ptr<Employee> q = move(p);
  
  // Runtime error: p is invalid after move(p)
  cout << p->get_name();

  // No need to delete the employee!
}