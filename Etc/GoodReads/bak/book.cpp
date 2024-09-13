#include "book.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

Book::Book(string id_, string title_, Author* author_, string genre_) :
	id(id_), title(title_), author(author_), genre(genre_) {}
