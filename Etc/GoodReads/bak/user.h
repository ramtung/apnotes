#ifndef __USER_H
#define __USER_H

#include <vector>
#include <string>

#include "author.h"
#include "book.h"
using namespace std;

class User {
public:
	User(string id_, string name_, string place_of_birth_, string member_since_, vector<string> favorite_genres_);
	string get_id() { return id; }

	void add_favorite_author(Author* author);
	void add_want_to_read_book(Book* book);
	void add_currently_reading_book(Book* book);
	void add_read_book(Book* book);
private:
	string id;
	string name;
	string place_of_birth;
	string member_since;
	vector<Author*> favorite_authors;
	vector<string> favorite_genres;
	vector<Book*> want_to_read;
	vector<Book*> currently_reading;
	vector<Book*> read;	
};

#endif