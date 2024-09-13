#include <string>
#include <cstdlib>
#include "person.hpp"
using namespace std;

Person::Person(string n, int d, int m, int y)
	: bdate(d, m, y)
{
    if (n == "")
        abort();
    name = n;
}