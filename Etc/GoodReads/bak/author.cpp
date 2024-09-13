#include "author.h"

#include <sstream>
#include <vector>
#include <string>
#include "def.h"
using namespace std;

Author::Author(string id_, string name_, string gender_, string member_since_, int 	year_of_birth_, string place_of_birth_, vector<string> genres_) :
		id(id_),
		name(name_),
		gender(gender_),
		member_since(member_since_),
		year_of_birth(year_of_birth_),
		place_of_birth(place_of_birth_),
		genres(genres_) {}

string Author::get_info() {
	ostringstream os;
	os 	<< "id: " << id << endl
		<< "Name: " << name << endl
		<< "Year of Birth: " << year_of_birth << endl
		<< "Place of Birth: " << place_of_birth << endl
		<< "Member Since: " << member_since << endl
		<< "Genres: " << join(genres, ", ");
		// << "Books: " << name << endl
	return os.str();
}
