// This program has an error
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int n, m;
vector<string> ar;
vector<int> inp;
bool flag = false, err = false;

void read_input() {
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        string a;
        cin >> a;
        ar.push_back(a);
    }

    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        inp.push_back(b);
    }
}

void process() {
    for (int j = 0; j < m; j++)
        for (int i = 0; i < n - 1; i++)
            if (ar[i][j] != '-') {
                if (ar[i][j] < 'a' || ar[i][j] > 'z') {
                    cout << "Invalid Network\n";
                    err = true;
                }
                if (!err)
                    for (int k = i + 1; k < n; k++) {
                        int cnt = 1;
                        if (ar[i][j] == ar[k][j]) {
                            cnt++;
                            if (inp[i] > inp[k]) {
                                char temp = inp[i];
                                inp[i] = inp[k];
                                inp[k] = temp;
                            }
                        }
                        if (cnt != 2) {
                            cout << "Invalid Network\n";
                            err = true;
                        }
                    }
            }    
}

void generate_output() {
    if (!err) {
        for (int i = 0; i < n - 1; i++)
            if (inp[i] > inp[i+1]) {
                cout << "Not sorted\n";
                flag = true;
            }
        if (!flag)
            cout << "Sorted\n";
    }
}

int main() {
    read_input();
    process();
    generate_output();
}




