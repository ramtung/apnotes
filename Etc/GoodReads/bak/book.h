#ifndef __BOOK_H
#define __BOOK_H

#include "author.h"
using namespace std;

class Book {
public:
	Book(string id_, string title_, Author* author_, string genre_);
	string get_id() { return id; }
private:
	string id;
	string title;
	Author* author;
	string genre;
};

#endif