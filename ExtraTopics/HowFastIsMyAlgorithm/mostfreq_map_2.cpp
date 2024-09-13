#include <iostream>
#include <vector>
#include <map>
#include <ctime>
#include <cstdlib>
using namespace std;

const int MAX_VALUE = 100;

string most_frequent_1(vector<string> v) {
	int max_freq = 0;
	string most_freq;
	for (int i = 0; i < v.size(); i++) {
		int count = 1;
		for (int j = i + 1; j < v.size(); j++) {
			if (v[j] == v[i])
				count++;
		}
		if (count > max_freq) {
			max_freq = count;
			most_freq = v[i];
		}
	}
	return most_freq;
}

string most_frequent_2(vector<string> v) {
	map<string, int> freqs;
	int max_freq = 0;
	string most_freq;
	for (int i = 0; i < v.size(); i++) {
		freqs[v[i]]++;
		if (freqs[v[i]] > max_freq) {
			max_freq = freqs[v[i]];
			most_freq = v[i];
		}
	}
	return most_freq;
}



int main()
{
	vector<string> v;
	string word;
	for (int i = 0; i < 20000; i++) {
		cin >> word;
		v.push_back(word);
	}

	clock_t timer;

	timer = clock();
	cout << most_frequent_1(v) << endl;
	timer = clock() - timer;
    cout << "Version 1: " << 1000 * timer / CLOCKS_PER_SEC << "(ms)\t\t";

	timer = clock();
	cout << most_frequent_2(v) << endl;
	timer = clock() - timer;
    cout << "Version 2: " << 1000 * timer / CLOCKS_PER_SEC << "(ms)" << endl;

	return 0;
}
