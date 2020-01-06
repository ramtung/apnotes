// handling errors in students name

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
#include "date.h"
using namespace std;

class Invalid_Student_Exception {};

class Student {
public:
	Student(string n, Date bd) : name(n), bdate(bd) {}
	void print() { cout << name << '\t'; bdate.print(); }
private:
	string name;
	Date bdate;
};


Student read_student(ifstream& input) {
	string name;
	input >> name;
	if (name.length() < 2)
		throw Invalid_Student_Exception();
	Date bdate = read_date(input);
	return Student(name, bdate);
}

void read_student_info(char* filename, vector<Student>& v) {
	ifstream input(filename);
	int count;
	input >> count;
	for (int i = 0; i < count; i++) {
		Student s = read_student(input);
		v.push_back(s);
	}
}

void do_some_processing(vector<Student>& v) {
	for (int i = 0; i < v.size(); i++) {
		v[i].print();
		cout << endl;
	}
}

int main(int argc, char* argv[]) {
	vector<Student> students;
	try {
		read_student_info(argv[1], students);
	} catch (Bad_Date_Exception bdx) {
		cout << "Invalid date encountered!\n";
		return 1;
	} catch (Invalid_Student_Exception bsx) {
		cout << "Invalid student information!\n";
		return 1;
	}
	do_some_processing(students);
}
	
