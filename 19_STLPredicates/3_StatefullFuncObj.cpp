#include <iostream>
#include <vector>
using namespace std;

/*
template<class In, class Pred>
In find_if(In first, In last, Pred pred) {
    while (first!=last && !pred(*first)) 
        ++first;
    return first; 
}
*/

class student {
public:
    student(string n, double d) : name(n), grade(d) {}
    string get_name() const { return name; }
    double get_grade() const { return grade; }
private:
    string name;
    double grade;
};

class GradeBelow {
public:
    GradeBelow(double c) : cutoff(c) {}
    bool operator()(const student& s) {
        return s.get_grade() < cutoff;
    }
private:
    double cutoff;
};

int main() {
    vector<student> v;
    v.push_back(student("Moez", 8.0));
    v.push_back(student("Gholam", 17.3));
    v.push_back(student("Ghamar", 4.5));

    vector<student>::iterator it;
    it = find_if(v.begin(), v.end(), GradeBelow(10));
    cout << it->get_name() << endl;
    
    it = find_if(v.begin(), v.end(), GradeBelow(5));
    cout << it->get_name() << endl;
}