#include <iostream>
#include <vector>
#include <list>
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
        int next_element() {
            int to_be_returned = current->data;
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
    void push_front(int x);
    void push_back(int x);
    void clear();
	
	void insert_after(Iterator it, int x) {
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
	
    Iterator get_iterator() {
        return Iterator(_head);
    }
private:
    Node* _head;
    Node* _last;
};

List::List() {
    _head = NULL;
    _last = NULL;
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

List::~List() {
    clear();
}

void List::clear() {
    Node *p = _head;
    while (p != NULL) {
        Node *q = p;
        p = p->next;
        delete q;
    }
    _head = NULL;
    _last = NULL;
}

// void print(auto c) {
// 
// }

int main() {
    List l;    
    l.push_back(86);
    l.push_front(43);
    l.push_front(12);

	List l2;
    l2.push_back(-8);
    l2.push_front(-56);
    l2.push_front(-2);
    
    int sum = 0;
    
	List::Iterator it = l.get_iterator();
    while (it.has_more_elements())
        sum += it.next_element();
    cout << sum << endl;

	List::Iterator i2 = l.get_iterator();
	i2.next_element();
	l2.insert_after(i2, 33);

	l.print();
	
	
}



