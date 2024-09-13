#include "goodreads.h"

#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <cstdlib>
#include "def.h"
using namespace std;

void GoodReads::read_authors(string author_filename) {
	ifstream author_file(author_filename);
	string line;
	getline(author_file, line); // skip the header line
	while (getline(author_file, line)) {
		vector<string> fields = tokenize(line, ',');
		authors.push_back(Author(
			fields[0],
			fields[1],
			fields[2],
			fields[3],
			stoi(fields[4]),
			fields[5],
			tokenize(fields[6], '$')
		));
	}
	author_file.close();
}

void GoodReads::read_books(string book_filename) {
	ifstream book_file(book_filename);
	string line;
	getline(book_file, line); // skip the header line
	while (getline(book_file, line)) {
		vector<string> fields = tokenize(line, ',');
		books.push_back(Book(
			fields[0],
			fields[1],
			find_author(fields[2]),
			fields[3]
		));
	}
	book_file.close();
}

void GoodReads::read_users(string user_filename) {
	ifstream user_file(user_filename);
	string line;
	getline(user_file, line); // skip the header line
	while (getline(user_file, line)) {
		vector<string> fields = tokenize(line, ',');
		User user(fields[0], fields[1], fields[2], fields[3], tokenize(fields[5], '$'));
		for (string author_id : tokenize(fields[4], '$'))
			user.add_favorite_author(find_author(author_id));
		for (string book_id : tokenize(fields[6], '$'))
			user.add_want_to_read_book(find_book(book_id));
		for (string book_id : tokenize(fields[7], '$'))
			user.add_currently_reading_book(find_book(book_id));
		for (string book_id : tokenize(fields[8], '$'))
			user.add_read_book(find_book(book_id));
		users.push_back(user);
	}
	user_file.close();
}

void GoodReads::read_reviews(string review_filename) {
	ifstream review_file(review_filename);
	string line;
	getline(review_file, line); // skip the header line
	while (getline(review_file, line)) {
		vector<string> fields = tokenize(line, ',');
		reviews.push_back(Review(
			fields[0],
			find_book(fields[1]),
			find_user(fields[2]),
			stoi(fields[3]),
			fields[4],
			stoi(fields[5])
		));
	}
	review_file.close();
}

string GoodReads::author_info(string author_id) {
	return find_author(author_id)->get_info();
}

Author* GoodReads::find_author(string id) {
	for (int i = 0; i < authors.size(); i++)
		if (authors[i].get_id() == id)
			return &authors[i];
	abort();
	return NULL;
}

Book* GoodReads::find_book(string id) {
	for (int i = 0; i < books.size(); i++)
		if (books[i].get_id() == id)
			return &books[i];
	abort();
	return NULL;
}

User* GoodReads::find_user(string id) {
	for (int i = 0; i < users.size(); i++)
		if (users[i].get_id() == id)
			return &users[i];
	abort();
	return NULL;
}
