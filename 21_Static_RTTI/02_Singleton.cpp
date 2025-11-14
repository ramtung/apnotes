#include <iostream>
#include <string>
using namespace std;

class Resource {
public:
	void Print() { cout << name_ << endl; }

  static Resource* instance() {
		return &instance_;
	}
private:
	string name_;
	Resource(string name) { name_ = name; }
  Resource(const Resource&) = delete;
  Resource& operator=(const Resource&) = delete;

  static Resource instance_;
};

Resource Resource::instance_("The One");

int main() {
	Resource* u = Resource::instance();
	u->Print();
}

