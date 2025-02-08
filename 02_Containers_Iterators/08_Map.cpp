#include <iostream>
#include <map>
using namespace std;

int main() {
	map<string, double> grades;
	grades["Hooshang"] = 12.3;
	grades["Mahvash"] = 16;

	cout << grades["Hooshang"] << endl;
	cout << grades["Esfandiar"] << endl;
	// cout << grades.at("Shahnaz") << endl;
	cout << grades.size() << endl;

	for (auto it = grades.begin(); it != grades.end(); it++)
		cout << it->first << "'s grade is " << it->second << endl;

	map<char, int> cc = {{'a', 4}, {'x', 3}, {'i', 1}};
	for (auto it2 = cc.begin(); it2 != cc.end(); it2++)
		cout << it2->first << "->" << it2->second << endl;
}