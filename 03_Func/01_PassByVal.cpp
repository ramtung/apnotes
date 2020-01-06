#include <iostream>
using namespace std;

void f(int x)
{
	int i = 5;
	x = i + 1;
}

int main()
{
	int a = 10;
	f(a);
	cout << a << endl;
	return 0;
}