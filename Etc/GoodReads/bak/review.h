#ifndef __REVIEW_H
#define __REVIEW_H

#include <string>
#include "book.h"
#include "user.h"
using namespace std;

class Review {
public:
	Review(string id_, Book* book_, User* user_, int rating_, string date_, int number_of_likes_);
private:
	string id;
	Book* book;
	User* user;
	int rating;
	string date;
	int number_of_likes;
};

#endif