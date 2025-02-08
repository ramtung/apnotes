#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main() {
  vector<double> u;
  u.push_back(1.3);
  u.push_back(4.5);
  cout << u[0];

  vector<int> v(6);
  v[0] = 5; 
  v[4] = 6;
  v.push_back(8);

  vector<int> v2(6, 999);
  cout << v2[0];

  vector<string> w = {"Gholi", "aroosi", "naraft!"};
  
  vector<vector<int>> twod(5);
  twod[0].push_back(12);
  twod[0].push_back(45);
  twod[1].push_back(3);
  twod[2] = {1, 6};
  
  /*
    [12, 45]
    [3]
    [1, 6]
    []
    []
  */
}