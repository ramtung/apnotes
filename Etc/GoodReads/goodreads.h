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
	string sorted_shelf(string user_id, string shelf_type, string genre);
	string user_credit(string user_id);
	string best_book();
	string best_reviewer();
private:
	Author* find_author(string id);
	Book* find_book(string id);
	User* find_user(string id);
	void add_books_to_authors();

	vector<Author> authors;
	vector<Book> books;
	vector<User> users;
	ReviewList reviews;
};

#endif