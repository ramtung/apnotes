#include "review.h"

#include <string>
using namespace std;

Review::Review(string id_, Book* book_, User* user_, int rating_, string date_, int number_of_likes_) :
		id(id_), book(book_), user(user_), rating(rating_), date(date_), number_of_likes(number_of_likes_) {}
