#include <iostream>
using namespace std;

void g(int& y)
{
	int j = 2;
	y = j * 3;
}

void f(int x)
{
	g(x);
	cout << x << endl;
}

int main()
{
	int a = 10;
	f(a);
	cout << a << endl;
	return 0;
}