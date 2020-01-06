#include <iostream>
using namespace std;

class Complex {
public:
    Complex(double r, double i) : real(r), imag(i) {}
    Complex(double r) : real(r), imag(0) {}
    void print() const;

    Complex add(const Complex& c) const;
    void inc(const Complex& c);

    double re() const { return real; }
    double im() const { return imag; }
private:
    double real;
    double imag;
};

Complex Complex::add(const Complex& c) const {
    return Complex(real + c.real, imag + c.imag);
}

void Complex::inc(const Complex& c) {
    real += c.real;
    imag += c.imag;
}

void Complex::print() const {
    cout << real;
    if (imag > 0)
        cout << '+' << imag << 'i';
    else if (imag < 0)
        cout << imag << 'i';
}

int main() {    
    Complex a(1, 2);
    Complex b(4, -2);

    const Complex zero(0,0);
    zero.inc(a);    // compile error

	a.inc(zero);
	
	
    zero.print();   // OK!

    a.print();          // 1+2i
    b.print();          // 4-2i

    Complex c = a.add(b);
    c.print();          // 5
	Complex d = zero.add(a);
    
    b.inc(c);           // 9-2i
    b.print();
}