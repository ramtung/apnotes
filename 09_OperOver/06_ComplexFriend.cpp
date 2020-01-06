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

    friend ostream& operator<<(ostream& out, const Complex& c);
private:
    double real;
    double imag;
};

ostream& operator<<(ostream& out, const Complex& c)
{
    out << c.real;
    if (c.imag > 0)
        out << '+' << c.imag << 'i';
    else if (c.imag < 0)
        out << c.imag << 'i';

    return out;
}

Complex operator+(const double r, const Complex& c)
{
    return Complex(c.re() + r, c.im());
}

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
    Complex b(4, -2);

    cout << a << b << endl;
    cout << a << b;
}
