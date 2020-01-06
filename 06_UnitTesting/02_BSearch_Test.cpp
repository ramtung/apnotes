#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<double> list, int from, int to, double key)
{
    if (from > to)
        return -1;

    int mid = (from + to) / 2;
    if (list[mid] == key)
        return mid;
    else if (list[mid] < key)
        return binary_search(list, mid + 1, to, key);
    else
        return binary_search(list, from, mid - 1, key);
}

void test_bsearch_1() {
    vector<double> list = {1.5, 2.2, 4, 6.7, 8};
    int result = binary_search(list, 0, 4, 2.2);
    if (result == 1)
        cout << "Test passed successfully!" << endl;
    else
        cout << "Test failed ..." << endl;  
}

void test_bsearch_2() {
    vector<double> list = {1.5, 2.2, 4, 6.7, 8};
    int result = binary_search(list, 0, 4, 2.3);
    if (result == -1)
        cout << "Test passed successfully!" << endl;
    else
        cout << "Test failed ..." << endl;  
}

void test_bsearch_3() {
    vector<double> list = {1.5, 2.2, 6.7, 8};
    int result = binary_search(list, 0, 3, 2.3);
    if (result == -1)
        cout << "Test passed successfully!" << endl;
    else
        cout << "Test failed ..." << endl;  
}

void test_bsearch_4() {
    vector<double> list = {1.5, 2.2, 6.7, 8};
    int result = binary_search(list, 0, 3, 2.2);
    if (result == 1)
        cout << "Test passed successfully!" << endl;
    else
        cout << "Test failed ..." << endl;  
}

void test_bsearch_5() {
    vector<double> list = {1.5};
    int result = binary_search(list, 0, 0, 2.2);
    if (result == -1)
        cout << "Test passed successfully!" << endl;
    else
        cout << "Test failed ..." << endl;  
}

void test_bsearch_6() {
    vector<double> list = {1.5};
    int result = binary_search(list, 0, 0, 1.5);
    if (result == 0)
        cout << "Test passed successfully!" << endl;
    else
        cout << "Test failed ..." << endl;  
}

int main() {
	test_bsearch_1();
	test_bsearch_2();
	test_bsearch_3();
	test_bsearch_4();
	test_bsearch_5();
	test_bsearch_6();
}

