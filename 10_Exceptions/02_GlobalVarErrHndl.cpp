// error handling using a global variable

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
using namespace std;

int error;

class Date {
public:
	Date(int d, int m, int y);
	void print();
private:
	int day;
	int month;
	int year;
};

bool is_leap_year(int y) {
	int r = y % 33;
	return r==1 || r==5 || r==9 || r==13 || r==17 || r==22 || r==26 || r==30;
}

int days_of_month(int m, int y) {
	error = 0;
	if (m < 7)
		return 31;
	else if (m < 12)
		return 30;
	else if (m == 12)
		return is_leap_year(y) ? 30 : 29;
	else { 
		error = 1;
		return 0;
	}
}

Date::Date(int d, int m, int y) {
	if (y < 0 || m < 1 || m > 12 || d < 1 || d > days_of_month(m, y)) {
		error = 1;
		return;
	}
	day = d;
	month = m;
	year = y;
	error = 0;
}

void Date::print() {
	cout << year << '/' << month << '/' << day;
}

class Student {
public:
	Student(string n, Date bd) : name(n), bdate(bd) {}
	void print() { cout << name << '\t'; bdate.print(); }
private:
	string name;
	Date bdate;
};


Date read_date(ifstream& input) {
	int d, m, y;
	char ch;
	input >> d;
    input >> ch;
	if (ch != '/') {
		error = 1;
		return Date(1,1,1);
	}
    input >> m;
    input >> ch;
	if (ch != '/') {
		error = 1;
		return Date(1,1,1);
	}
	input >> y;
	error = 0;
	return Date(d, m, y);
}

Student read_student(ifstream& input) {
	string name;
	input >> name;
	Date bdate = read_date(input);
	if (error == 1)
		return Student("", Date(1,1,1));
	else {
		error = 0;
		return Student(name, bdate);
	}
}

void read_student_info(char* filename, vector<Student>& v) {
	ifstream input(filename);
	int count;
	input >> count;
	for (int i = 0; i < count; i++) {
		Student s = read_student(input);
		if (error == 1) {
			error = 0;
			continue;
		}
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
	if (error == 1) {
		cout << "Could not read students inforamtion!\n";
		return 1;
	}
	do_some_processing(students);
}
	
