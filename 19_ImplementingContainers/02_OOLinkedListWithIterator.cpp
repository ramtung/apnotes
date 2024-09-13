#include <iostream>
using namespace std;

class List {
private:
    class Node {
    public:
        Node(int d, Node *n = NULL, Node *p = NULL)
                : data(d), next(n), prev(p) {}

        int data;
        Node *next;
        Node *prev;
    };

public:
    class Iterator {
    public:
        int get_element() {
            return current->data;
        }
        void goto_next() {
            if (current != NULL)
                current = current->next;
        }
        bool has_more_elements() {
            return current != NULL;
        }
        friend class List;
    private:
        Node* current;
        List* list;
        Iterator(List* l, Node* n) {
            current = n;
            list = l;
        }
    };
public:
    List();
    ~List();
    List(const List&);
    List& operator=(const List&);
    void print();
    void push_front(int x);
    void push_back(int x);
    Iterator find(int x);
    void insert_after(Iterator it, int x);
    void delete_all();

    Iterator get_iterator() {
        return Iterator(this, _head);
    }
private:
    Node* _head;
    Node* _last;

    Node* find_rec(Node* l, int x) const;
    Node* make_copy(Node* p);
};

List::List() {
    _head = NULL;
    _last = NULL;
}

List::List(const List &l) {
    _head = make_copy(l._head);
    _last = l._last;
}

List &List::operator=(const List &l) {
    if (&l != this) {
        delete_all();
        _head = make_copy(l._head);
        _last = l._last;
    }
    return *this;
}

List::~List() {
    delete_all();
}

void List::print() {
    for (Node* p = _head; p != NULL; p = p->next)
        cout << p->data << ' ';
}

void List::push_front(int x) {
    Node *new_node = new Node(x);
    new_node->next = _head;
    if (_head != NULL)
        _head->prev = new_node;
    _head = new_node;
    if (_last == NULL)
        _last = new_node;
}

void List::push_back(int x) {
    if (_head == NULL)
        push_front(x);
    else {
        Node *new_node = new Node(x);
        new_node->prev = _last;
        _last->next = new_node;
        _last = new_node;
    }
}

void List::insert_after(List::Iterator it, int x) {
    if (it.list != this)
        return; // or throw some exception
    Node* p = it.current;
    if (p == NULL) {
        push_back(x);
        return;
    }
    Node* n = new Node(x);
    n->next = p->next;
    if (p->next != NULL)
        p->next->prev = n;
    n->prev = p;
    p->next = n;
    if (p == _last)
        _last = n;
}

void List::delete_all() {
    Node *p = _head;
    while (p != NULL) {
        Node *q = p;
        p = p->next;
        delete q;
    }
    _head = NULL;
    _last = NULL;
}

List::Node *List::make_copy(List::Node *p) {
    return p ? new Node(p->data, p->prev, make_copy(p->next)) : NULL;
}

List::Iterator List::find(int x) {
    return List::Iterator(this, find_rec(_head, x));
}

List::Node *List::find_rec(List::Node *l, int x) const {
    if (l == NULL)
        return NULL;
    if (l->data == x)
        return l;
    return find_rec(l->next, x);
}


int main() {
    List l1;
    l1.push_back(86);
    l1.push_front(43);
    l1.push_front(12);

    List l2;
    l2.push_back(-8);
    l2.push_front(-56);
    l2.push_front(-2);

    int sum = 0;

    List::Iterator it = l1.get_iterator();
    while (it.has_more_elements()) {
        sum += it.get_element();
        it.goto_next();
    }
    cout << sum << endl;

    List::Iterator i2 = l1.get_iterator();
    i2.goto_next();
    l2.insert_after(i2, 33);
    l1.print();

    l1.insert_after(l1.find(43), 66);
    l1.print();

    List l3 = l2;
    l3 = l1;
}