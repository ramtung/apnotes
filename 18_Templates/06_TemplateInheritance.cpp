template<typename T>
class Base {
public:
	virtual T get() = 0;
};

template<typename T>
class Derived : public Base<T> {
public:
	Derived(T d) : data(d) {}
	T get() { return data; }
private:
	T data;
};

class DerivedDouble : public Base<double> {
public:
	double get() { return 1.5; }
};

int main() {
	Derived<int> x(10);
	DerivedDouble y;
}