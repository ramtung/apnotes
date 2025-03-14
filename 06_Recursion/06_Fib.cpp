#include <iostream>
#include <iomanip>
#include <chrono>
using namespace std;
using namespace chrono;

long fib(long n) {
  if (n <= 1)
    return n;
  return fib(n - 1) + fib (n - 2);
}

long iterativeFib(long n) {
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


void printHeader() {
  cout << setw(5) << "n"
       << setw(17) << "Iterative"
       << setw(17) << "Recursive"
       << endl << string(40, '-') << endl;
}

void printDuration(steady_clock::time_point start, 
                   steady_clock::time_point end) {
  cout 
    << setw(12) << fixed << setprecision(5) 
    << duration_cast<nanoseconds>(end - start).count() * 1e-6
    << " (ms)";
}

int main() {
  printHeader();
  for (int n = 0; n < 50; n++) {
    cout << setw(5) << n;

    auto start = steady_clock::now();
    iterativeFib(n);
    auto end = steady_clock::now();
    printDuration(start, end);

    start = steady_clock::now();
    fib(n);
    end = steady_clock::now();
    printDuration(start, end);
    cout << endl;
  }
}