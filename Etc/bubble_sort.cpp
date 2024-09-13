#include <iostream>
#include <vector>
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

int main() {
    srand(time(0));
    vector<int> v1(50000);
    for (int i = 0; i < v1.size(); i++)
        v1[i] = rand() % v1.size();
    vector<int> v2 = v1;

    clock_t t;
    t = clock();
    bubble_sort_1(v1);
    t = clock() - t;
    cout << "V1: " << 1000*t/CLOCKS_PER_SEC << "(ms)\t";

    t = clock();
    bubble_sort_2(v2);
    t = clock() - t;
    cout << "V2: " << 1000*t/CLOCKS_PER_SEC << "(ms)\t";

}