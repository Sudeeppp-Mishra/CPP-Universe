#include<iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex() {}

    Complex(int r, int i): real(r), imag(i) { }

    friend void Sum(Complex, Complex);

    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};

void Sum(Complex c1, Complex c2)
{
    cout<<c1.real+c2.real<<"+"<<c1.imag+c2.imag<<"i"<<endl;
}

int main()
{
    Complex c1(3,4), c2(4,2), sum;
    c1.display();
    c2.display();

    Sum(c1,c2);
    return 0;
}