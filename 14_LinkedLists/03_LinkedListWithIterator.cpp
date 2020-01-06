#include <iostream>
using namespace std;

class Node {
public:
	Node(int d, Node* p = 0, Node* n = 0) {
		data = d;
		prev = p;
		next = n;
	}
	Node* get_next() { return next; }
	Node* get_prev() { return prev; }
	int get_data() { return data; }

	friend class List;
	friend class Iterator;
private:
	int data;
	Node* next;
	Node* prev;
};

class Iterator {
public:
    Iterator(Node* n) { 
		current = n; 
	}
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
};


class List {
public:
    List();
    ~List();
    Iterator get_iterator() {
    	return Iterator(_head);
    }
    void print();
    void push_front(int x);
    void push_back(int x);
	void insert_after(Iterator it, int x);
    void clear();
    Iterator find(int x) {
		return Iterator(find_rec(_head, x));
	}
private:
    Node* _head;
    Node* _last;

	Node* find_rec(Node* l, int x);
};

void List::insert_after(Iterator it, int x) {
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

Node* List::find_rec(Node* l, int x) {
	if (l == NULL)
		return NULL;
	if (l->data == x)
		return l;
	return find_rec(l->next, x);
}

List::List() {
    _head = NULL;
    _last = NULL;
}

void List::print() {
    for (Node* p = _head; p != NULL; p = p->next)
        cout << p->data << ' ';
	cout << endl;
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

    int sum = 0;
    for (Iterator it = l1.get_iterator(); it.has_more_elements(); it.goto_next())
        sum += it.get_element();
    cout << sum << endl;

	Iterator it = l1.find(43);
    l1.insert_after(it, 55);
    
    l1.print();    
}







