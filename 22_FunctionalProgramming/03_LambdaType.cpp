#include <functional>
using namespace std;

using Int = int;

int main() {
	Int x;

	function<bool (int)> l;
	l = [](int a){ return a == 2; };
	l(3);
}
