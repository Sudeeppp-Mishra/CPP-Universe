#include<iostream>
using namespace std;

class Complex
{
    int real, imag;
    static int count;

public:
    Complex(): real(0), imag(0) {}

    Complex(int real, int imag): real(real), imag(imag) {}

    void print()
    {
        cout<<"\nComplex no "<<++count<<": "<<real<<"+"<<imag<<"i"<<endl;
    }

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }

    Complex operator-(Complex c)
    {
        Complex temp;
        temp.real=real-c.real;
        temp.imag=imag-c.imag;
        return temp;
    }
};

int Complex::count;

int main()
{
    Complex c1(1,5), c2(2,6), c3;
    c1.print();
    c2.print();
    c3=c1+c2;
    c3.print();

    c3=c1-c2;
    c3.print();
}