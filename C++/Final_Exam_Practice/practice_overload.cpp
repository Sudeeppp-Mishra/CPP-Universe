#include<iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex(): real(0), imag(0) {}

    Complex(int r, int i)
    {
        real=r;
        imag=i;
    }

    void operator +(Complex c)
    {
        real=real+c.real;
        imag=imag+c.imag;
        cout<<real<<"+"<<imag<<"i"<<endl;
    }

    void print()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};

int main()
{
    Complex c1(5,4),c2(2,3);

    c1.print();
    cout<<endl
        <<endl;

    c2.print();
    cout<<endl  
        <<endl;

    c1+c2;
    return 0;
}