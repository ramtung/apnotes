#include <iostream>
#include <stdexcept>
using namespace std;

class Resource {
public:
  Resource(string name) : name_(name) {
    if (count_ >= LIMIT)
      throw runtime_error("Resource instance limit reached");
    count_++;
  }
  ~Resource() { count_--; }

	void Print() { cout << name_ << endl; }
	
  const static int LIMIT;
  static int InstanceCount() { return count_; }
private:
	string name_;
  static int count_;
};

int Resource::count_ = 0;
const int Resource::LIMIT = 5;

int main() {
  if (Resource::InstanceCount() < Resource::LIMIT) {
    Resource resource("r1");
    resource.Print();
  }
}
	

