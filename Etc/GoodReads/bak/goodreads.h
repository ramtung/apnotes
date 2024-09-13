#ifndef __GOODREADS_H
#define __GOODREADS_H

#include <vector>
#include <string>
#include "author.h"
#include "book.h"
#include "user.h"
#include "review.h"
using namespace std;

class GoodReads {
public:
	void read_authors(string author_filename);
	void read_books(string book_filename);
	void read_users(string user_filename);
	void read_reviews(string review_filename);
	string author_info(string author_id);
private:
	Author* find_author(string id);
	Book* find_book(string id);
	User* find_user(string id);

	vector<Author> authors;
	vector<Book> books;
	vector<User> users;
	vector<Review> reviews;
};

#endif