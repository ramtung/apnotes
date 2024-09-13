#include <iostream>
using namespace std;

template<typename T>
class List {
private:
    class Node {
    public:
        Node(T d, Node *n = NULL, Node *p = NULL) 
            : data(d), next(n), prev(p) {}

        T data;
        Node *next;
        Node *prev;
    };

public:
    class Iterator {
    public:
        T next_element() { 
            T to_be_returned = current->data;
            current = current->next;
            return to_be_returned;
        }
        bool has_more_elements() {
            return current != NULL;
        }
    private:
        Node *current;
        Iterator(Node* n) { current = n; }
        friend class List;
    };

public:
    List();
    ~List();
    void print();
    void push_front(T x);
    void push_back(T x);
    Iterator get_iterator() {
        return Iterator(_head);
    }
private:
    Node* _head;
    Node* _last;
};

template<typename T>
List<T>::List() {
    _head = NULL;
    _last = NULL;
}

template<typename T>
void List<T>::print() {
    for (Node* p = _head; p != NULL; p = p->next) {
        cout << p->data << ' ';
    }
}

template<typename T>
void List<T>::push_front(T x) {
    Node *new_node = new Node(x);
    new_node->next = _head;
    if (_head != NULL)
        _head->prev = new_node;
    _head = new_node;
    if (_last == NULL)
        _last = new_node;
}

template<typename T>
void List<T>::push_back(T x) {
    if (_head == NULL)
        push_front(x);
    else {
        Node *new_node = new Node(x);
        new_node->prev = _last;
        _last->next = new_node;
        _last = new_node;
    }
}

template<typename T>
List<T>::~List() {
    Node *p = _head;
    while (p != NULL) {
        Node *q = p;
        p = p->next;
        delete q;
    }
    _head = NULL;
}

int main() {
    List<int> l;
    
    l.push_back(86);
    l.push_front(43);
    l.push_front(12);
    
    l.print();
    cout << endl;

    int sum = 0;
    
    List<int>::Iterator it = l.get_iterator();
    while (it.has_more_elements())
        sum += it.next_element();
        
    cout << sum << endl;
}