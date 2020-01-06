#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class queue_operation_exception {};

template<typename T, int S> 
class queue {
public:
    queue() { count = 0; }
    void enqueue(T x);
    T dequeue();
    int size() const { return elements.size(); }
private:
    T elements[S];
    int count;
};

template<class T, int S>
void queue<T, S>::enqueue(T x)
{
    if (count >= sizeof(elements))
        throw queue_operation_exception();
    elements[count++] = x;
}

template<class T, int S>
T queue<T, S>::dequeue() 
{
    if (count == 0)
        throw queue_operation_exception();
    T result = elements[0];
    for (int i = 1; i < count; i++)
        elements[i-1] = elements[i];
    count--;
    return result;
}

int main() {
    queue<int, 10> q;
    q.enqueue(10);
    q.enqueue(20);
    cout << q.dequeue() << endl;

	int n;
	cin >> n;
	// compile error: the size template argument must be known at compile time
    // queue<int, n> y;

    queue<string, 8> p;
    p.enqueue("salaam");
    p.enqueue("chetori?");
    cout << p.dequeue() << endl;    
}



