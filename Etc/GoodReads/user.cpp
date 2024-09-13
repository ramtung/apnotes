#include "user.h"

#include <vector>
#include <string>
#include <sstream>
#include "def.h"
using namespace std;

User::User(string id_, string name_, string place_of_birth_, string member_since_, vector<string> favorite_genres_) :
		id(id_), name(name_), place_of_birth(place_of_birth_), member_since(member_since_), favorite_genres(favorite_genres_) {}

string User::get_description()
{
	vector<string> favorite_authors_names;
	for (Author* author : favorite_authors)
		favorite_authors_names.push_back(author->get_name());

	ostringstream os;
	os 	<< "id: " << id << endl
		<< "Name: " << name << endl
		<< "Member Since: " << member_since << endl
		<< "Favorite Genres: " << join(favorite_genres, ", ") << endl
		<< "Favorite Authors: " << join(favorite_authors_names, ", ") << endl
		<< "Number of Books in Read Shelf: " << read.size() << endl
		<< "Number of Books in Want to Read Shelf: " << want_to_read.size() << endl
		<< "Number of Books in Currently Reading Shelf: " << currently_reading.size();
	return os.str();
}

void User::add_favorite_author(Author* author) 
{ 
	favorite_authors.push_back(author); 
}

void User::add_want_to_read_book(Book* book) 
{ 
	want_to_read.add_book(book); 
}

void User::add_currently_reading_book(Book* book) 
{ 
	currently_reading.add_book(book); 
}

void User::add_read_book(Book* book) 
{ 
	read.add_book(book); 
}

BookList User::get_copy_of_shelf(string shelf_type)
{
	if (shelf_type == "currently_reading")
		return currently_reading;
	if (shelf_type == "want_to_read")
		return want_to_read;
	if (shelf_type == "read")
		return read;
	abort();
}


string User::sorted_shelf(string shelf_type, string genre)
{
	BookList shelf = get_copy_of_shelf(shelf_type);
	shelf.sort(genre);
	return shelf.get_descriptions();
}
