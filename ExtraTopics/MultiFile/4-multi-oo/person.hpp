#include <string>
#include "date.hpp"
using namespace std;
                                                                                
class Person {
public:
    Person(string n, int d, int m, int y);
    Date get_bdate() { return bdate; }
    string get_name() { return name; }
private:
    string name;
    Date bdate; 
};