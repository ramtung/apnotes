#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include <iostream>
#include "catch.hpp"

using namespace std;

int factorial(int number) {
    int result = 1;
    for (int i = 1; i <= number; i++)
    	result *= i;
    return result;
}

TEST_CASE("Factorials are computed correctly") {
    REQUIRE(factorial(1) == 1);
    REQUIRE(factorial(2) == 2);
    REQUIRE(factorial(3) == 6);
    REQUIRE(factorial(10) == 3628800);
}

/*
TEST_CASE("Factorial of zero returns 1") {
    REQUIRE(factorial(0) == 1);
}

TEST_CASE("Factorial function returns zero for negative numbers") {
    REQUIRE(factorial(-1) == 0);
    REQUIRE(factorial(-2) == 0);
}
*/