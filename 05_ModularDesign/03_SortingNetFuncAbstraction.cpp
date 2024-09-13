#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<int> read_numbers(int count) {
    vector<int> result;
    for (int i = 0; i < count; i++) {
        int number;
        cin >> number;
        result.push_back(number);
    }
    return result;
}

vector<string> read_network(int num_of_inputs) {
    vector<string> result;
    for (int i = 0; i < num_of_inputs; i++) {
        string line;
        cin >> line;        
        result.push_back(line);
    }
    return result;
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

bool is_valid_network(vector<string> network, int num_of_stages) {
    for (int j = 0; j < num_of_stages; ++j) {
        for (int i = 0; i < network.size(); ++i) {
            if (network[i][j] == '-')
                continue;
            if (network[i][j] < 'a' || network[i][j] > 'z') 
                return false;
            
            int count = 0;
            for (int k = 0; k < network.size(); k++)
                if (network[i][j] == network[k][j])
                    count++;

            if (count != 2) {
                return false;
            }
        }
    }
    return true;
}

void apply_stage(vector<string> network, int j, 
                 vector<int>& numbers) {
    for (int i = 0; i < network.size() - 1; i++) {
        if (network[i][j] == '-')
            continue;

        for (int k = i + 1; k < network.size(); k++)
            if (network[i][j] == network[k][j])
                if (numbers[i] > numbers[k])
                    swap(numbers[i], numbers[k]);
    }
}

void apply_network(vector<string> network, 
                   vector<int>& numbers) 
{
    for (int j = 0; j < network[0].size(); j++)
        apply_stage(network, j, numbers);    
}

int main() {
    int num_of_inputs;
    int num_of_stages;

    cin >> num_of_inputs >> num_of_stages;

    vector<string> network = read_network(num_of_inputs);
    vector<int> numbers = read_numbers(num_of_inputs);

    if (!is_valid_network(network, num_of_stages)) {
        cout << "Invalid network\n";
        return -1;
    }

    apply_network(network, numbers);

    if (is_sorted(numbers.begin(), numbers.end()))
        cout << "Sorted";
    else
        cout << "Not sorted";
    cout << endl;
}

