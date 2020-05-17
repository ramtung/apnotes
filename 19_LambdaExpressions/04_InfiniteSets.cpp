#include <iostream>
using namespace std;

template<typename T>
using iset = function<bool (T)>;

template<typename T>
iset<T> intersect(iset<T> s1, iset<T> s2) {
	return [=](T i) { return s1(i) && s2(i); };	
}

struct point {
	point(double _x, double _y) : x(_x), y(_y) {}
	double x;
	double y;
};

iset<point> half_plane(double a, double b, double c) {
	return [=](point p) { return a*p.x + b*p.y <= c; };
}

int main() {
	iset<point> f = half_plane(1.2, -1, 5);
	iset<point> g = half_plane(0, 1, 0);

	iset<point> h = intersect(f, g);
	iset<point> k = intersect(half_plane(1, 1, 0), h);

	cout << k(point(0, -2)) << endl;
	cout << k({0, -2}) << endl;
}