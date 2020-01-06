#include <iostream>
using namespace std;

class Complex {
public:
    Complex(double r, double i) : real(r), imag(i) {}
    Complex(double r) : real(r), imag(0) {}

    void print() const;

//  Complex add(const Complex& c) const;
    Complex operator+(const Complex& c) const;
//  void inc(const Complex& c);
    Complex& operator+=(const Complex& c);

    double re() const { return real; }
    double im() const { return imag; }

private:
    double real;
    double imag;

};

//Complex Complex::add(const Complex& c) const
Complex Complex::operator+(const Complex& c) const
{
    return Complex(real + c.real, imag + c.imag);
}

//void Complex::inc(const Complex& c)
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

    // Complex c = a.add(b);
    Complex c = a + b;
    c.print();          // 5
    
    // b.inc(c);            
    b += c;     
    b.print();          // 9-2i
    b.operator+(c);

    (b += c).print();
}