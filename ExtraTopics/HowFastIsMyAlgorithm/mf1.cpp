#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <map>
using namespace std;

const int MAX_VALUE = 100;

int most_frequent_1(vector<int> v) {
	int most_freq;
	int max_freq = 0;
	for (int i = 0; i < v.size(); i++) {
		int count = 0;
		for (int j = 0; j < v.size(); j++) {
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

int most_frequent_1_improved_a_tiny_little_bit(vector<int> v) {
	int most_freq;
	int max_freq = 0;
	for (int i = 0; i < v.size(); i++) {
		int count = 0;
		for (int j = i; j < v.size(); j++) {
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


int most_frequent_2(vector<int> v) {
	sort(v.begin(), v.end());
	int max_freq = 0;
	int most_freq;
	int currently_counting = v[0];
	int current_count = 1;
	for (int i = 1; i < v.size(); i++) {
		if (v[i] != currently_counting) {
			if (current_count > max_freq) {
				max_freq = current_count;
				most_freq = currently_counting;
			}
			currently_counting = v[i];
			current_count = 1;
		} else {
			current_count++;
		}
		if (current_count > max_freq) {
			max_freq = current_count;
			most_freq = currently_counting;
		}
	}
	return most_freq;
}

int most_frequent_3(vector<int> v) {
	vector<int> freqs(MAX_VALUE);
	int max_freq = 0;
	int most_freq;
	for (int i = 0; i < v.size(); i++) {
		freqs[v[i]]++;
		if (freqs[v[i]] > max_freq) {
			max_freq = freqs[v[i]];
			most_freq = v[i];
		}
	}
	return most_freq;
}

string most_frequent_4(vector<string> v) {
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


int main() {
	int seed = time(0);
	cout << "seed: " << seed << endl;
	srand(seed);
	
	for (int size = 50000; size <= 500000; size += 50000) {
		cout << "Size: " << size << endl;
		vector<int> v(size);
		for (int i = 0; i < v.size(); i++) {
			v[i] = rand() % MAX_VALUE;
		}

		clock_t timer;

		// timer = clock();
		// cout << most_frequent_1(v) << '\t';
		// timer = clock() - timer;
	 //    cout << "Version 1: " << 1000 * timer / CLOCKS_PER_SEC << "(ms)" << endl;	

		// timer = clock();
		// cout << most_frequent_1_improved_a_tiny_little_bit(v) << '\t';
		// timer = clock() - timer;
	 //    cout << "Version 1': " << 1000 * timer / CLOCKS_PER_SEC << "(ms)" << endl;	

		timer = clock();
		cout << most_frequent_2(v) << '\t';
		timer = clock() - timer;
	    cout << "Version 2: " << 1000 * timer / CLOCKS_PER_SEC << "(ms)" << endl;	

		timer = clock();
		cout << most_frequent_3(v) << '\t';
		timer = clock() - timer;
	    cout << "Version 3: " << 1000 * timer / CLOCKS_PER_SEC << "(ms)" << endl;	

	}
}



