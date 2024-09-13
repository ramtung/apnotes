#include "user.h"

#include <vector>
#include <string>
using namespace std;

User::User(string id_, string name_, string place_of_birth_, string member_since_, vector<string> favorite_genres_) :
		id(id_), name(name_), place_of_birth(place_of_birth_), member_since(member_since_), favorite_genres(favorite_genres_) {}

void User::add_favorite_author(Author* author) 
{ 
	favorite_authors.push_back(author); 
}

void User::add_want_to_read_book(Book* book) 
{ 
	want_to_read.push_back(book); 
}

void User::add_currently_reading_book(Book* book) 
{ 
	currently_reading.push_back(book); 
}

void User::add_read_book(Book* book) 
{ 
	read.push_back(book); 
}
