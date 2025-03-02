#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <iostream>
#include <vector>
#include "catch.hpp"
using namespace std;

int bsearch(vector<double> list, int from, int to, double key)
{
    if (list.size() == 0)
        return -1;
    if (from > to)
        return -1;

    int mid = (from + to) / 2;
    if (list[mid] == key)
        return mid;
    else if (list[mid] < key)
        return bsearch(list, mid + 1, to, key);
    else
        return bsearch(list, from, mid - 1, key);
}

int binarySearch(vector<double> v, double key) {
    return bsearch(v, 0, v.size() - 1, key);
}

TEST_CASE("Searching for an existing element") {
    vector<double> list = {1.5, 2.2, 4, 6.7, 8};
    REQUIRE(binarySearch(list, 2.2) == 1);
}

TEST_CASE("Searching for a missing element") {
    vector<double> list = {1.5, 2.2, 4, 6.7, 8};
    REQUIRE(binarySearch(list, 2.3) == -1);
}

TEST_CASE("Searching for a missing element in a singletorn list") {
    vector<double> list = {1.5};
    REQUIRE(binarySearch(list, 2.2) == -1);
}

TEST_CASE("Searching for the only element in a singletorn list") {
    vector<double> list = {1.5};
    REQUIRE(binarySearch(list, 1.5) == 0);
}

