#include <iostream>
using namespace std;

class Node {
public:
    Node(int d, Node *n = NULL, Node *p = NULL)
        : data(d), next(n), prev(p) {}

    int data;
    Node *next;
    Node *prev;
};

void print_list(Node *list) {
    for (Node* p = list; p != NULL; p = p->next)
        cout << p->data << ' ';
}

void rec_print_list(Node *list) {
    if (list == NULL)
        return;
    cout << list->data << ' ';
    rec_print_list(list->next); 
}

void push_front(Node*& list, int x) {
    Node *new_node = new Node(x);
    new_node->next = list;
    if (list != NULL)
        list->prev = new_node;
    list = new_node;
}

void push_back(Node *&list, int x) {
    Node *new_node = new Node(x);

    if (list != NULL) {
        Node *p = list;
        while (p->next != NULL)
            p = p->next;
    
        new_node->prev = p;
        p->next = new_node;
    } else
        list = new_node;
}

void push_back_rec(Node *&list, int x) {
	if (list->next == NULL) {
		list->next = new Node(x);
		list->next->prev = list;
	}
	else {
		push_back_rec(list->next, x);
	}
}

void delete_list(Node *&list) {
    Node *p = list;
    while (p != NULL) {
        Node *q = p;
        p = p->next;
        delete q;
    }
    list = NULL;
}

void rec_delete_list(Node *&list) {
    if (list == NULL)
        return;
    rec_delete_list(list->next);
    delete list;
    list = NULL;
}

int main() {
    Node *l = NULL;
    
    push_back(l, 86);
    push_front(l, 43);
    push_front(l, 12);
    
    print_list(l);
    cout << endl;

    push_back(l, 444);

    print_list(l);
    cout << endl;   

    cout << l << endl;

    delete_list(l);

    cout << l << endl;
    print_list(l);
    cout << endl;       
}