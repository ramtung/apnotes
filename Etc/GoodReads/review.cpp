#include "review.h"

#include <string>
using namespace std;

Review::Review(string id_, Book* book_, User* user_, int rating_, string date_, int number_of_likes_) :
		id(id_), book(book_), user(user_), rating(rating_), date(date_), number_of_likes(number_of_likes_) {}

void ReviewList::add_review(Review review)
{
	reviews.push_back(review);
}

int ReviewList::number_of_reviews()
{
	return reviews.size();
}

int ReviewList::number_of_likes()
{
	int result = 0;
	for (Review& review : reviews)
		result += review.get_likes();
	return result;
}

int ReviewList::number_of_user_reviews(User* user)
{
	int result = 0;
	for (Review& review : reviews)
		if (review.is_written_by(user))
			result++;
	return result;
}

int ReviewList::number_of_user_reviews_likes(User* user)
{
	int result = 0;
	for (Review& review : reviews)
		if (review.is_written_by(user))
			result += review.get_likes();
	return result;
}

double ReviewList::user_credit(User* user)
{
	return  0.5 * number_of_user_reviews_likes(user) / number_of_likes() +
			0.5 * number_of_user_reviews(user) / number_of_reviews();
}

double ReviewList::book_rating(Book* book)
{
	double sum = 0;
	int count = 0;
	for (Review& review : reviews)
		if (review.is_on_book(book)) {
			sum += review.get_rating();
			count++;
		}
	return count ? sum / count : 0;
}
