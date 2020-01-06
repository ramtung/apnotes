// handling errors in student names too

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
#include "date.h"
using namespace std;

int student_error;
int date_error;

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
	if (name.length() < 2) {
		student_error = 1;
		return Student("", default_date);
	}
	Date bdate = read_date(input);
	if (date_error == 1) {
		student_error = 1;
		date_error = 0;
		return Student("", default_date);
	} else {
		student_error = 0;
		return Student(name, bdate);
	}
}

void read_student_info(char* filename, vector<Student>& v) {
	ifstream input(filename);
	int count;
	input >> count;
	for (int i = 0; i < count; i++) {
		Student s = read_student(input);
		if (student_error == 1)
			return;
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
	read_student_info(argv[1], students);
	if (student_error == 1) {
		cout << "Could not read students inforamtion!\n";
		return 1;
	}
	do_some_processing(students);
}
	
