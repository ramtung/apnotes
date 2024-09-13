#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;


int main () {
  int * a,b;
  a=0; b=0;
  if (typeid(a) != typeid(b))
  {
    cout << "a and b are of different types:\n";
    cout << "a is: " << typeid(a).name() << '\n';
    cout << "b is: " << typeid(b).name() << '\n';

	cout << typeid(int).name() << endl;
	cout << typeid("a").name() << endl;
	cout << typeid(string).name() << endl;
  }
  return 0;
}