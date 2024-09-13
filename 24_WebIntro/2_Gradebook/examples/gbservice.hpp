#ifndef _GBSERVICE_
#define _GBSERVICE_

#include <map>
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	Student(string i, string n, double hw, double mid, double fin) {
		set_id(i);
		set_name(n);
		set_homework(hw);
		set_midterm(mid);
		set_final(fin);
	}
	string get_name() { return name; }
	string get_id() { return id; }
	double get_homework() { return homework; }
	void set_homework(double hw) { homework = hw; }
	double get_midterm() { return midterm; }
	void set_midterm(double mid) { midterm = mid; }
	double get_final() { return final; }
	void set_final(double fin) { final = fin; }
private:
	void set_id(string i) { id = i; }
	void set_name(string n) { name = n; }
	string name;
	string id;
	double homework;
	double midterm;
	double final;
};

class GradebookService {
public:
	GradebookService(double h, double m, double f) {
		hwWeight = h;
		midWeight = m;
		finWeight = f;
		students["1"] = new Student("1", "Gholam", 13, 10, 14);
		students["2"] = new Student("2", "Gholi", 6, 10, 11.5);
		students["3"] = new Student("3", "Ghamar", 18, 19.7, 20);
	}

	~GradebookService() {
	    for(auto itr = students.begin(); itr != students.end(); itr++)
	        delete (itr->second);
	    students.clear();
	}

	Student* get_student(string id) {
		return students[id];
	}

	vector<Student*> get_all_students() {
		vector<Student*> result;
	    for(auto itr = students.begin(); itr != students.end(); itr++)
	    	result.push_back(itr->second);
	    return result;
	}

	void update_student(string id, double hw, double mid, double fin) {
		students[id]->set_homework(hw);
		students[id]->set_midterm(mid);
		students[id]->set_final(fin);
	}

	double percentPassed() {
		int passCount = 0;
		for (auto itr = students.begin(); itr != students.end(); itr++) {
			Student* si = itr->second;
			double siTotal = si->get_homework()*hwWeight + si->get_midterm()*midWeight + si->get_final()*finWeight;
			passCount += siTotal < 10 ? 0 : 1;
		}
		return passCount * 100.0 / students.size();
	}
private:
	map<string, Student*> students;
	double hwWeight;
	double midWeight;
	double finWeight;
};

#endif
