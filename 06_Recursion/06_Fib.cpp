#include <iostream>
#include <ctime>
using namespace std;

long fib(long n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib (n - 2);
}














long nr_fib(long n)
{
    if (n <= 0)
        return 0;

    long a = 1;
    long b = 1;
    
    for (long i = 0; i < n - 2; i++) {
        long c = a + b;
        a = b;
        b = c;
    }
    return b;
}







int main()
{
    clock_t t;
    for (int n = 0; n < 50; n++) {
        cout << "n=" << n << '\t';

        t = clock();
        long f = nr_fib(n);
        t = clock() - t;
        cout << "Non-Rec: " << 1000*t/CLOCKS_PER_SEC << "(ms)\t";

        t = clock();
        f = fib(n);
        t = clock() - t;
        cout << "Rec: " << 1000*t/CLOCKS_PER_SEC << "(ms)\n";
    }
}