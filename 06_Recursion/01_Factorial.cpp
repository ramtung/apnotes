#include <iostream>
using namespace std;

int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    int num;
    cout << "Enter a positive integer number: ";
    cin >> num;
    int num_fact = fact(num);
    cout << num << "! = " <<  num_fact << endl;
}