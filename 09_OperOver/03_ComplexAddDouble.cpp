#include <iostream>
using namespace std;

class Complex {
public:
    Complex(double r, double i) : real(r), imag(i) {}
    Complex(double r) : real(r), imag(0) {}

    void print() const;

    Complex operator+(const Complex& c) const;
    Complex& operator+=(const Complex& c);
    Complex operator+(double r) const;

    double re() const { return real; }
    double im() const { return imag; }

private:
    double real;
    double imag;
};

Complex Complex::operator+(double r) const
{
    return Complex(real + r, imag);
}

Complex Complex::operator+(const Complex& c) const
{
    return Complex(real + c.real, imag + c.imag);
}

Complex& Complex::operator+=(const Complex& c)
{
    real += c.real;
    imag += c.imag;
    return *this;
}

void Complex::print() const
{
    cout << real;
    if (imag > 0)
        cout << '+' << imag << 'i';
    else if (imag < 0)
        cout << imag << 'i';
}

int main()
{
    Complex a(1, 2);

    Complex c = a + 2;
    c.print();            // 3+2i 
}