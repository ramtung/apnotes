const int a = 10;
int b = 10;

void f(const int& x) {}
void g(int& x) {}

int main() {
	f(a);
	f(b);
	g(a);
	g(b);
}
