#include <iostream>
#include <string>
#include <cstdlib>
#include "goodreads.h"
using namespace std;

int main() {
	GoodReads goodreads;
	goodreads.read_authors("authors.csv");
	goodreads.read_books("books.csv");
	goodreads.read_users("users.csv");
	goodreads.read_reviews("reviews.csv");

	string command;
	while (cin >> command) {
		if (command == "show_author_info") {
			string author_id;
			cin >> author_id;
			cout << goodreads.author_info(author_id) << endl;
		} else {
			cerr << "unknown command" << endl;
			abort();
		}
	}	
}