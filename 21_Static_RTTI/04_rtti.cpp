#include <iostream>
#include <typeinfo>

class Person {
public:
    virtual ~Person() = default;
};

class Employee : public Person {};

int main() {
    Person person;
    Employee employee;
    Person* ptr = &employee;
    Person& ref = employee;
    
    // The string returned by typeid::name is implementation-defined.
    std::cout << typeid(person).name()
              << std::endl;  // Person (statically known at compile-time).
    std::cout << typeid(employee).name()
              << std::endl;  // Employee (statically known at compile-time).
    std::cout << typeid(ptr).name()
              << std::endl;  // Person* (statically known at compile-time).
    std::cout << typeid(*ptr).name()
              << std::endl;  // Employee (looked up dynamically at run-time
                             //           because it is the dereference of a
                             //           pointer to a polymorphic class).
    std::cout << typeid(ref).name()
              << std::endl;  // Employee (references can also be polymorphic)

    Person* p = nullptr;
    
    try {
        typeid(*p); // Not undefined behavior; throws std::bad_typeid.
    } catch (...) { }

    Person& p_ref = *p; // Undefined behavior: dereferencing null
    typeid(p_ref);      // does not meet requirements to throw std::bad_typeid
                        // because the expression for typeid is not the result
                        // of applying the unary * operator.
}