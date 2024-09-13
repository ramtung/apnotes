#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	vector<double> vec;
	// vec[0] = 10;
	vec.push_back(1.3);				
	vec[0] = 12.4;

	vector<int> v(6);
	v[0] = 5; 
	v[1] = 7;
	v[2] = 9; 
	v[3] = 4;
	v[4] = 6; 
	v[5] = 8;

	vector<int> w = {5, 7, 9, 4, 6, 8}; 	// C++11 or higher

	vector<string> philosopher(4);
	philosopher [0] = "Kant"; 
	philosopher [1] = "Plato";
	philosopher [2] = "Hume";
	philosopher [3] = "Kierkegaard";
	//philosopher[2] = 99;
	
	vector<double> vd(1000, 1.2);
	
	vector<vector<int> > twod(5);
	twod[0].push_back(12);
	twod[0].push_back(45);
	twod[1].push_back(3);
	twod[2].push_back(1);
	twod[2].push_back(6);
	
	/*
		[12, 45]
		[3]
		[1, 6]
		[]
		[]
	*/
}
