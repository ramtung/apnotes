#include <vector>
#include <iostream>
#include <iomanip>
#include <chrono>
#include <ctime>
#include <cstdlib>
using namespace std;


void bubble_sort_1(vector<int>& v) {
    for (int i = 0; i < v.size()-1; i++)
        for (int j = 0; j < v.size()-i-1; j++)
            if (v[j] > v[j+1])
                swap(v[j], v[j+1]);
}

void bubble_sort_2(vector<int>& v) {
    vector<int> w = v;
    for (int i = 0; i < w.size()-1; i++)
        for (int j = 0; j < w.size()-i-1; j++)
            if (w[j] > w[j+1])
                swap(w[j], w[j+1]);
    v = w;
}

void bubble_sort_3(vector<int>& v) {
    int* w = new int[v.size()];
    for (int i = 0; i < v.size(); i++) w[i] = v[i];

    for (int i = 0; i < v.size()-1; i++)
        for (int j = 0; j < v.size()-i-1; j++)
            if (w[j] > w[j+1])
                swap(w[j], w[j+1]);
	
	for (int i = 0; i < v.size(); i++) v[i] = w[i];
	delete[] w;
}

double time_taken(void (*sort_func)(vector<int>&), int size) {
	vector<int> v(size);
	for (int i = 0; i < v.size(); i++) {
		v[i] = rand() % size;
	}

	auto start = chrono::high_resolution_clock::now();

	// // unsync the I/O of C and C++.
	// ios_base::sync_with_stdio(false);

	sort_func(v);

	auto end = chrono::high_resolution_clock::now();

	// Calculating total time taken by the program.
	double time_taken =
	chrono::duration_cast<chrono::nanoseconds>(end - start).count();

	time_taken *= 1e-6;
	return time_taken;
}

void report(int version, double time_taken) {
	// cout << "Time taken by version " << version << " is : " << fixed
	// 	<< time_taken << setprecision(9);
	// cout << " sec" << endl;
	cout << fixed << time_taken << setprecision(5) << '\t';
}

int main()
{
	int seed = time(0);
	srand(seed);

	for (int n = 1; n <= 10; n += 1) {
		cout << n << ": \t";
		report(1, time_taken(bubble_sort_1, n));
		report(2, time_taken(bubble_sort_2, n));
		report(3, time_taken(bubble_sort_3, n));
		cout << endl;
	}


	return 0;
}
