#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include <iostream>
#include "catch.hpp"

using namespace std;

class EmptyArrayEx {};

int largest(int array[], int count) {
	if (count == 0)
		throw EmptyArrayEx();
	int largest_yet = array[0];
	for (int i = 1; i < count; i++)
		if (array[i] > largest_yet)
			largest_yet = array[i];
	return largest_yet;
}

TEST_CASE( "Largest Test", "[Testing Largest Method]" ) {
	
	SECTION("normal test") {
		int a[] = {2, 4, 12, 54, 3, 44};
		REQUIRE( largest(a, sizeof(a) / sizeof(int)) == 54 );
	}

	SECTION("largest element is at the head") {
		int a[] = {200, 4, 12, 54, 3, 44};
		REQUIRE( largest(a, 7) == 200 );
	}

	SECTION("largest element is at the end") {
		int a[] = {200, 4, 12, 54, 3, 4400};
		REQUIRE( largest(a, 6) == 4400 );
	}

	SECTION("largest of a singleton") {
		int a[] = {200};
		REQUIRE( largest(a, 1) == 200 );
	}

	SECTION("largest of an empty array") {
		int a[] = {};
		REQUIRE_THROWS( largest(a, 0) );
	}

}







