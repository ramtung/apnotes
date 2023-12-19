#include <iostream>
#include <string>
#include <memory>
using namespace std;

class FunGuy {
public:
    FunGuy(string name_) : name(name_) {
        cout << "Hi " << name << endl;
    }
    ~FunGuy() {
        cout << "Bye " << name << endl;
    }
    void introduce_youself() {
        cout << "I'm " << name << ", the fun guy!" << endl;
    }
private:
    string name;
};

void make_fun_0() {
    FunGuy* bob = new FunGuy("Bob");

    bob->introduce_youself();

//    if (something_happens)
//        return;     // memory leak

    delete bob;
}

void make_fun_1() {
    unique_ptr<FunGuy> bob(new FunGuy("Bob"));

    bob->introduce_youself();

    // No need to delete
}


void make_fun_2() {
    unique_ptr<FunGuy> bob = make_unique<FunGuy>("Bob");

    // no need to delete
}

void make_fun_3() {
    unique_ptr<FunGuy> bob = make_unique<FunGuy>("Bob");
    bob->introduce_youself();

    // unique_ptr<FunGuy> another_bob = bob;
}

void make_fun_4() {
    unique_ptr<FunGuy> bob = make_unique<FunGuy>("Bob");
    bob->introduce_youself();

//  compile error: unique pointers cannot be copied
//  unique_ptr<FunGuy> another_bob = bob;

    unique_ptr<FunGuy> another_bob = move(bob);
    another_bob->introduce_youself();
}

void make_fun_5() {
    unique_ptr<FunGuy> bob = make_unique<FunGuy>("Bob");
    bob->introduce_youself();
    unique_ptr<FunGuy> another_bob = move(bob);
    another_bob->introduce_youself();
    
//  runtime error, bob is no longer a valid pointer:
    bob->introduce_youself(); 
}

void make_fun_6() {
    unique_ptr<FunGuy> another_bob;
    {
        unique_ptr<FunGuy> bob = make_unique<FunGuy>("Bob");
        bob->introduce_youself();
        another_bob = move(bob);
    }   // bob will go outside scope, but the object is not destructed
    another_bob->introduce_youself();
}

unique_ptr<FunGuy> make_fun_guy(string name) {
    unique_ptr<FunGuy> p = make_unique<FunGuy>(name);
    p->introduce_youself();
    return p;   // implicitly uses 'move'
}

void make_fun_7() {
    shared_ptr<FunGuy> another_bob;
    {
        shared_ptr<FunGuy> bob = make_shared<FunGuy>("Bob");
        bob->introduce_youself();
        another_bob = bob;      // copying via assignment is possible for shared pointers
        bob->introduce_youself();
    }   // bob will go outside scope, but the object is not destructed
    another_bob->introduce_youself();
}

int main() {
    make_fun_7();
}
