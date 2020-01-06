#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Comparator {
	int end1;
	int end2;
};
typedef vector<Comparator> Stage;
typedef vector<Stage> Network;
typedef vector<int> Numbers;

Comparator new_comparator(int e1, int e2)
{
	Comparator c;
	c.end1 = e1;
	c.end2 = e2;
	return c;
}

Network read_network(int num_of_inputs, int num_of_stages) {
	
	Network net(num_of_stages);
	
	vector<string> temp_net;
	for (int i = 0; i < num_of_inputs; i++) {
		string line;
		cin >> line;
		temp_net.push_back(line);
	}
	
	for (int cur_stage = 0; cur_stage < num_of_stages; cur_stage++) {
		for (int i = 0; i < num_of_inputs; i++) {
			if (temp_net[i][cur_stage] == '-')
				continue;
			for (int k = i+1; k < num_of_inputs; k++)
				if (temp_net[i][cur_stage] == temp_net[k][cur_stage])
					net[cur_stage].push_back(new_comparator(i, k));
		}
	}	
	return net;
}

Numbers read_input(int cnt) {
	Numbers result(cnt);
	for (int i = 0; i < cnt; i++)
		cin >> result[i];
	return result;
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void apply_stage(Stage stage, Numbers& nums) 
{
	for (int c = 0; c < stage.size(); c++) 
		if (nums[stage[c].end1] > nums[stage[c].end2])
			swap(nums[stage[c].end1], 
				 nums[stage[c].end2]);
}

void apply_network(Network network, Numbers& numbers) 
{
    for (int j = 0; j < network.size(); j++)
        apply_stage(network[j], numbers);    
}

int main()
{
	int num_of_inputs, num_of_stages;
	cin >> num_of_inputs >> num_of_stages;

	Network network = read_network(num_of_inputs, num_of_stages);
	Numbers numbers = read_input(num_of_inputs);
	
    apply_network(network, numbers);

	if (is_sorted(numbers.begin(), numbers.end()))
		cout << "Sorted\n";
	else
		cout << "Not sorted\n";
}
