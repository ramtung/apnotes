#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class queue_operation_exception {};

const int SIZE = 10;

template<typename T>
class queue {
public:
    queue() { count = 0; }
    void enqueue(T x);
    T dequeue();
    int size() const { return elements.size(); }
private:
    T elements[SIZE];
    int count;
};

template<class T>
void queue<T>::enqueue(T x)
{
    if (count >= sizeof(elements))
        throw queue_operation_exception();
    elements[count++] = x;
}

template<class T>
T queue<T>::dequeue() 
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
    queue<int> q;
    q.enqueue(10);
    q.enqueue(20);
    cout << q.dequeue() << endl;

    queue<string> p;
    p.enqueue("salaam");
    p.enqueue("chetori?");
    cout << p.dequeue() << endl;    
}



