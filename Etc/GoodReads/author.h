#ifndef __AUTHOR_H
#define __AUTHOR_H

#include <vector>
#include <string>
#include "forward.h"
using namespace std;

class Author {
public:
	Author(string id_, string name_, string gender_, string member_since_, int year_of_birth_, string place_of_birth_, vector<string> genres_);
	string get_id() { return id; }
	string get_name() { return name; }
	string get_info();

	void add_book_authored(Book* book);
// private:
	string id;
	string name;
	string gender;
	string member_since;
	int year_of_birth;
	string place_of_birth;
	vector<string> genres;

	vector<Book*> books_authored;
};

#endif