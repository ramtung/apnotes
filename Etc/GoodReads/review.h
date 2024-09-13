#ifndef __REVIEW_H
#define __REVIEW_H

#include <string>
#include "forward.h"
#include "book.h"
#include "user.h"
using namespace std;

class Review {
public:
	Review(string id_, Book* book_, User* user_, int rating_, string date_, int number_of_likes_);
	int get_likes() { return number_of_likes; }
	int get_rating() { return rating; }
	bool is_written_by(User* user_) { return user == user_; }
	bool is_on_book(Book* book_) { return book == book_; }
private:
	string id;
	Book* book;
	User* user;
	int rating;
	string date;
	int number_of_likes;
};

class ReviewList {
public:
	void add_review(Review review);
	double user_credit(User* user);
	double book_rating(Book* book);
	int number_of_user_reviews_likes(User* user);
private:
	int number_of_reviews();
	int number_of_likes();
	int number_of_user_reviews(User* user);

	vector<Review> reviews;
};

#endif