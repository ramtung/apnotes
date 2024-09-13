#include "def.h"

#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

template<typename T>
void print_vec(vector<T> v) {
	for (T s : v) {
		cout << '"' << s << "\", ";
	}
	cout << endl;
}

string join(const vector<string>& v, string separator) {
	if (v.size() == 0)
		return "";
	ostringstream os;
	for (int i = 0; i < v.size() - 1; i++)
		os << v[i] << separator;
	os << v[v.size() - 1];
	return os.str();
}

vector<string> tokenize(string str, char separator) {
	vector<string> result;
	int prevSepPos = 0;
	int nextSepPos = str.find_first_of(separator);
	while (nextSepPos != string::npos) {
		result.push_back(str.substr(prevSepPos, nextSepPos - prevSepPos));
		prevSepPos = nextSepPos + 1;
		nextSepPos = str.find_first_of(separator, prevSepPos);
	}
	result.push_back(str.substr(prevSepPos));
	return result;
}