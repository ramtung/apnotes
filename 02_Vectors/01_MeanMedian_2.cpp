// using a function median to improve readability and keeping the elements order unchanged

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double median(vector<double> v) 
{
	sort(v.begin(), v.end());
	return v[v.size()/2];
}

int main()
{
	vector<double> temps;
	double temp;
	while (cin >> temp)
		temps.push_back(temp);

	double sum = 0;
	for (int i = 0; i < temps.size(); ++i)
		sum += temps[i];
				
	cout << "Mean temperature: " << sum/temps.size() << endl;
	cout << "Median temperature: " << median(temps);
}
