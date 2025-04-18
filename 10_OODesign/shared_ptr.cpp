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
  shared_ptr<Employee> p(new Employee("1001", "Jamshid"));
  // Alternative syntax:
  // shared_ptr<Employee> p = make_shared<Employee>("1001", "Jamshid");

  // De-reference like an ordinary pointer
  cout << p->get_name() << endl;

  shared_ptr<Employee> q = p;
  cout << q->get_name() << endl;

  // No need to delete the employee!
}