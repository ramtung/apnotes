#ifndef __BOOK_H
#define __BOOK_H

#include "forward.h"
#include "author.h"
using namespace std;

class Book {
public:
	Book(string id_, string title_, Author* author_, string genre_);
	string get_id() { return id; }
	string get_title() { return title; }
	Author* get_author() { return author; }
	bool is_in_genre(string genre_) { return genre == genre_; }

	string get_short_description();
	string get_description();

private:
	string id;
	string title;
	Author* author;
	string genre;
};

class BookList {
public:
	void add_book(Book* book);
	int size() { return books.size(); }
	
	void sort(string genre);
	string get_descriptions();
private:
	void sort_recursively(int from_index, string genre);
	vector<Book*> books;
};
#endif