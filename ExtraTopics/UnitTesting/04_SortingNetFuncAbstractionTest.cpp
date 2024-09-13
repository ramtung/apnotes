#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#include "catch.hpp"

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
		if (network.size() == 0)
			cerr << "inside for\n";
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

TEST_CASE( "Apply Network Tests", "") {
    vector<string> net {
        "a-",
        "-b",
        "a-",
        "-b"
    };
    vector<int> nums {3, 5, 1, 4};
    apply_network(net, nums);
    REQUIRE(nums == vector<int>({1, 4, 3, 4}));
	
}


TEST_CASE( "Apply Stage", "[Testing apply_stage function]" ) {
    
    SECTION("apply stage must swap") {
        vector<string> net {
            "a",
            "-",
            "a",
            "-"
        };
        vector<int> nums {3, 2, 1, 4};
        apply_stage(net, 0, nums);
        REQUIRE(nums == vector<int>({1, 2, 3, 4}));
    }

    SECTION("apply stage already sorted") {
        vector<string> net {
            "a",
            "-",
            "a",
            "-"
        };
        vector<int> nums {1, 2, 3, 4};
        
        apply_stage(net, 0, nums);
        REQUIRE(nums == vector<int>({1, 2, 3, 4}));
    }

    SECTION("apply stage no comparator") {
        vector<string> net {
            "-",
            "-",
            "-",
            "-"
        };
        vector<int> nums {3, 2, 1, 4};
        apply_stage(net, 0, nums);
        REQUIRE(nums == vector<int>({3, 2, 1, 4}));
    }

    SECTION("apply stage two comparators") {
        vector<string> net {
            "a",
            "b",
            "a",
            "b"
        };
        vector<int> nums {3, 2, 1, 4};
        apply_stage(net, 0, nums);
        REQUIRE(nums == vector<int>({1, 2, 3, 4}));
    }

    SECTION("apply stage adjacent comparators") {
        vector<string> net {
            "a",
            "b",
            "b",
            "a"
        };
        vector<int> nums {3, 4, 2, 1};
        apply_stage(net, 0, nums);
        REQUIRE(nums == vector<int>({1, 2, 4, 3}));
    }

    SECTION("apply stage of zero size") {
        vector<string> net;
        vector<int> nums;
        // apply_stage(net, 0, nums);
        // REQUIRE(nums == vector<int>());
    }

}