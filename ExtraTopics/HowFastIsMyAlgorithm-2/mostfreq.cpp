#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

const int MAX_VALUE = 100;

int most_frequent_1(vector<int> v) {
	int max_freq = 0;
	int most_freq;
	for (int i = 0; i < v.size(); i++) {
		int count = 0;
		for (int j = 0; j < v.size(); j++) {
			if (v[j] == v[i])
				count++;
		}
		if (count > max_freq) {
			most_freq = v[i];
			max_freq = count;
		}
	}
	return most_freq;
}

int most_frequent_1_5(vector<int> v) {
	int max_freq = 0;
	int most_freq;
	for (int i = 0; i < v.size(); i++) {
		int count = 1;
		for (int j = i+1; j < v.size(); j++) {
			if (v[j] == v[i])
				count++;
		}
		if (count > max_freq) {
			most_freq = v[i];
			max_freq = count;
		}
	}
	return most_freq;
}

int most_frequent_2(vector<int> v) {
	vector<int> freqs(MAX_VALUE);
	int max_freq = 0;
	int most_freq;
	for (int i = 0; i < v.size(); i++) {
		freqs[v[i]]++;
		if (freqs[v[i]] > max_freq)
			most_freq = v[i];
	}
	return most_freq;
}



int main()
{

	for (int size = 5000; size <= 50000; size += 5000) {
		int seed = time(0);
		srand(seed);
		vector<int> v(size);
		for (int i = 0; i < v.size(); i++) {
			v[i] = rand() % MAX_VALUE;
		}

		cout << "Size: " << size << '\t';

		clock_t timer;

		timer = clock();
		most_frequent_1(v);
		timer = clock() - timer;
	    cout << "Version 1: " << 1000 * timer / CLOCKS_PER_SEC << "(ms)\t";

		timer = clock();
		most_frequent_1_5(v);
		timer = clock() - timer;
	    cout << "Version 1.5: " << 1000 * timer / CLOCKS_PER_SEC << "(ms)\t";

		timer = clock();
		most_frequent_2(v);
		timer = clock() - timer;
	    cout << "Version 2: " << 1000 * timer / CLOCKS_PER_SEC << "(ms)" << endl;
	}

	return 0;
}
