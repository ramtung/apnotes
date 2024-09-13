#include <bits/stdc++.h>
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

int main()
{
	int seed = time(0);
	srand(seed);
	vector<int> v(200000);
	for (int i = 0; i < v.size(); i++) {
		v[i] = rand() % 200000;
	}

	auto start = chrono::high_resolution_clock::now();

	// // unsync the I/O of C and C++.
	// ios_base::sync_with_stdio(false);

	bubble_sort_3(v);

	auto end = chrono::high_resolution_clock::now();

	// Calculating total time taken by the program.
	double time_taken =
	chrono::duration_cast<chrono::nanoseconds>(end - start).count();

	time_taken *= 1e-9;

	cout << "Time taken by program is : " << fixed
		<< time_taken << setprecision(9);
	cout << " sec" << endl;
	return 0;
}
