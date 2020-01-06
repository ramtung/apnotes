#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<double> temps;
	double temp;
	while (cin >> temp)
		temps.push_back(temp);

	double sum = 0;
	for (int i = 0; i < temps.size(); ++i)
		sum += temps[i];
		
	vector<double> original_temps = temps;
				
	cout << "Mean temperature: " << sum/temps.size() << endl;
	sort(temps.begin(), temps.end());
	cout << "Median temperature: " << temps[temps.size()/2] << endl;
}