#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student {
public:
  Student(string name, double grade) : name_(name), grade_(grade) {}
  string name() const { return name_; }
  double grade() const { return grade_; }
private:
  string name_;
  double grade_;
};

class BelowCutoff {
public:
  BelowCutoff(double cutoff) : cutoff_(cutoff) {}
  bool operator()(const Student& s) {
    return s.grade() < cutoff_;
  }
private:
  double cutoff_;
};

int main() {
  vector<Student> v {
    Student("Moez", 8.0),
    Student("Gholam", 17.3),
    Student("Ghamar", 4.5)
  };

  vector<Student>::iterator it;
  it = find_if(v.begin(), v.end(), BelowCutoff(10));
  cout << it->name() << endl;
  
  it = find_if(v.begin(), v.end(), BelowCutoff(5));
  cout << it->name() << endl;
}