#include <iostream>
using namespace std;

template<typename T>
void print_array(T arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << ' ';
}

int main() {
  int a[3] = {1, 3, 4};
  char c[2] = {'b', 'a'};
  
  print_array<int>(a, 3);
  print_array<char>(c, 2);  

  print_array(a, 3);
  print_array(c, 2);
}