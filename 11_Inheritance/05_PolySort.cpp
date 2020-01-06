#include <iostream>
#include <string>
using namespace std;

class object {
public:
    virtual int compare_to(const object* o) = 0;
    virtual string to_string() const = 0;
};

class incomparable_types_ex {
public:
    incomparable_types_ex(const object* _o1, const object* _o2) : o1(_o1), o2(_o2) {}
    const object* o1;
    const object* o2;
};

class duck : public object {
public:
    duck(string n) : name(n) {}

    int compare_to(const object* o) {
        const duck* p = dynamic_cast<const duck*>(o);
        if (p == NULL)
            throw incomparable_types_ex(this, o);
        return name.compare(p->name);
    }
    string to_string() const { return name; }
private:
    string name;
};

class student : public object {
public:
    student(string n, double d) : name(n), grade(d) {}

    int compare_to(const object* o) {
        const student* p = dynamic_cast<const student*>(o);
        if (p == NULL)
            throw incomparable_types_ex(this, o);
        return grade - p->grade;
    }

    string to_string() const { return name; }
private:
    string name;
    double grade;
};

int min_index(object* array[], int count, int from_index) {
    int min_idx = from_index;
    for (int i = 1; i < count; i++)
        if (array[i]->compare_to(array[min_idx]) < 0)
            min_idx = i;
    return min_idx;
}

void selection_sort(object* array[], int count, int from_index) {
    if (from_index >= count -1)
        return;
    int min_idx = min_index(array, count, from_index);
    
    object* temp = array[min_idx];
    array[min_idx] = array[from_index];
    array[from_index] = temp;

    selection_sort(array, count, from_index + 1);
}

int main() {
    duck donald("Donald");
    student moez("Moez", 2.0);

    try {
        cout << donald.compare_to(&moez);
    } catch (incomparable_types_ex e) {
        cerr << "Failed to compare incomparable objects: " 
            << e.o1->to_string() << " and " << e.o2->to_string() << endl;
    }

    object* studs[] = {
        new student("Masoud", 2.0),
        new student("Gholam", 15.5),
        new student("Ghamar", 17.8)
    };

    selection_sort(studs, sizeof(studs)/sizeof(object*), 0);

    for (int i = 0; i < sizeof(studs)/sizeof(object*); i++) {
        cout << studs[i]->to_string() << endl;
        delete studs[i];
    }
}