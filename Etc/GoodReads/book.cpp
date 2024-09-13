#include "book.h"

#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include "def.h"
using namespace std;

Book::Book(string id_, string title_, Author* author_, string genre_) :
	id(id_), title(title_), author(author_), genre(genre_) 
{

}

string Book::get_short_description() 
{
	ostringstream os;
	os << "id: " << id << " Title: " << title;
	return os.str();
}

string Book::get_description() 
{
	ostringstream os;
	os 	<< "id: " << id << endl
		<< "Title: " << title << endl
		<< "Genre: " << genre << endl
		<< "Author: " << author->get_name();
	return os.str();
}

void BookList::add_book(Book* book) 
{
	books.push_back(book);
}

bool comes_before_in_sort_order(Book* b1, Book* b2, string genre)
{
	if (b1->is_in_genre(genre) && !b2->is_in_genre(genre))
		return true;
	if (!b1->is_in_genre(genre) && b2->is_in_genre(genre))
		return false;
	return b1->get_title() <= b2->get_title();
}

void BookList::sort(string genre)
{
	sort_recursively(0, genre);
}

void BookList::sort_recursively(int from_index, string genre)
{
	if (from_index >= books.size())
		return;
	int min_index = from_index;
	for (int j = from_index; j < books.size(); j++)
		if (comes_before_in_sort_order(books[j], books[min_index], genre))
			min_index = j;
	Book* temp = books[min_index];
	books[min_index] = books[from_index];
	books[from_index] = temp;

	sort_recursively(from_index + 1, genre);
}

string BookList::get_descriptions() 
{
	ostringstream os;
	for (int i = 0; i < books.size(); i++) {
		os << books[i]->get_description();
		if (i < books.size())
			os << endl << "***" << endl;
	}
	return os.str();
}