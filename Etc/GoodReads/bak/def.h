#ifndef __DEF_H
#define __DEF_H

#include <vector>
#include <string>
using namespace std;

template<typename T>
void print_vec(vector<T> v);

string join(const vector<string>& v, string separator);

vector<string> tokenize(string str, char separator);

#endif