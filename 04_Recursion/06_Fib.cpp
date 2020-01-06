#include <iostream>
#include <ctime>
using namespace std;

long fib(long n)
{
    if (n <= 2)
        return 1;
    return fib(n - 1) + fib (n - 2);
}

long nr_fib(long n)
{
    long a = 1;
    long b = 1;
    long c;
    
    for (long i = 0; i < n - 2; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main()
{
    clock_t t;
    for (int n = 1; n < 50; n++) {
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