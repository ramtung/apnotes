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
        Iterator(Node* n) { 
            current = n; 
        }
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

	List::Iterator i2 = l2.get_iterator();
	i2.goto_next();
	l2.insert_after(i2, 33);

	l2.print();
}



