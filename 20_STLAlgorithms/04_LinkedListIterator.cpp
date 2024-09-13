#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>
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
    class Iterator : public iterator<input_iterator_tag, T> {
    private:
        Iterator(Node* n) { current = n; }
        friend class List;
    public:
        Iterator& operator++() { 
            if (current != NULL)
                current = current->next;
            return *this;
        }

        T& operator*() {
            return current->data;
        }

        bool operator==(const Iterator& it) {
            return current == it.current;
        }

        bool operator!=(const Iterator& it) {
            return current != it.current;
        }
    private:
        Node *current;
    };

public:
    List();
    ~List();
    void print();
    void push_front(T x);
    void push_back(T x);
    Iterator begin() {
        return Iterator(_head);
    }
    Iterator end() {
        return Iterator(NULL);
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
    
    cout << accumulate(l.begin(), l.end(), 0) << endl;

    List<int>::Iterator it = find(l.begin(), l.end(), 43);

    if (dynamic_cast<iterator<input_iterator_tag,int>*>(&it))
        cout << "Yes" << endl;

    if (it != l.end()) {
        cout << "found\n";
        *it = 56;
    } else
        cout << "not found\n";

    vector<string> v;
    v.push_back("gholi");
    v.push_back("aroosi");
    v.push_back("naraft!");

    cout << accumulate(v.begin(), v.end(), string("")) << endl;
    
    double dd[3] = {1.2, 3.4, 67485.2};
    cout << accumulate(dd, dd + 3, 0.0) << endl;
}