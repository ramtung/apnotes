#include <iostream>
#include <string>
#include <cstdlib>
#include "goodreads.h"
#include "def.h"
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
		} else if (command == "show_sorted_shelf") {
			string user_id;
			string shelf_type;
			string genre;
			cin >> user_id >> shelf_type >> genre;
			cout << goodreads.sorted_shelf(user_id, shelf_type, genre);
		} else if (command == "credit") {
			string user_id;
			cin >> user_id;
			cout << goodreads.user_credit(user_id) << endl;
		} else if (command == "best_book") {
			cout << goodreads.best_book() << endl;
		} else if (command == "best_reviewer") {
			cout << goodreads.best_reviewer() << endl;
		} else {
			cerr << "unknown command" << endl;
			abort();
		}
	}	
}