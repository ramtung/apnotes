#include <iostream>
#include <string>
using namespace std;

template<typename U, typename V> 
class Pair {
public:
    Pair(U f, V s) : first(f), second(s) {}
    U get_first() { return first; }
    V get_second() { return second; }
private:
    U first;
    V second;
};

int main()
{
    Pair<string, double> record("gholam", 11.4);
    cout << record.get_first();
}