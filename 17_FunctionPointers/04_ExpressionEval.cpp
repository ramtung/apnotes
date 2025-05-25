#include <iostream>
#include <string>
#include <map>
using namespace std;

typedef int (*operation)(int, int);

int add(int a, int b) { return a + b; }
int mult(int a, int b) { return a * b; }
int sub(int a, int b) { return a - b; }
int divide(int a, int b) { return a / b; }

int main() {
  string s;
  cin >> s;

  map<char, operation> ops;
  ops['+'] = add;
  ops['-'] = sub;
  ops['*'] = mult;
  ops['/'] = divide;

  int result = s[0]-'0';
  for (int i = 1; i < s.length(); i += 2)
    result = ops[s[i]](result, s[i+1]-'0');

  cout << result << endl;
}