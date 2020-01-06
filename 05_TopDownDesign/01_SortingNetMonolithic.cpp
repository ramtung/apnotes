// This program has an error
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> ar(n);
    vector<int> inp(n);
    bool flag = false, err = false;

    for (int i = 0; i < n; ++i)
        cin >> ar[i];

    for (int i = 0; i < n; i++)
        cin >> inp[i];

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




