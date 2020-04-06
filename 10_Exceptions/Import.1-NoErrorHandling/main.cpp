#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "date.h"
using namespace std;

class Student 
{
public:
	Student(string n, Date bd);
	void print();
	// other methods
private:
	string name;
	Date bdate;
	// other fields
};

Student::Student(string n, Date bd) : name(n), bdate(bd) {}

void Student::print() 
{ 
	cout << name << '\t'; bdate.print(); 
}

void do_some_processing(vector<Student>& v);
Student read_student(ifstream& input);
void read_student_info(char* filename, vector<Student>& v) ;

int main(int argc, char* argv[]) 
{
	vector<Student> students;
	read_student_info(argv[1], students);
	do_some_processing(students);
}

void do_some_processing(vector<Student>& v) 
{
    for (int i = 0; i < v.size(); i++) {
        v[i].print();
        cout << endl;
    }
}

void read_student_info(char* filename, vector<Student>& v) 
{
    ifstream input(filename);
    int count;
    input >> count;
    for (int i = 0; i < count; i++) {
        Student s = read_student(input);
        v.push_back(s);
    }
    input.close();
}

Student read_student(ifstream& input) 
{
    string name;
    input >> name;
    Date bdate = read_date(input);
    return Student(name, bdate);
}