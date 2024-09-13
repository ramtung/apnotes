void f(int x) {
	x = 10;
}

void g(int& x) {
	x = 10;
}

int main() {
	int a;
	f(a);
	g(a);
}