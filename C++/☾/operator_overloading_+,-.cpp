#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex() : real(0), imag(0) {} // Constructor handling for creating a object c3 in this cas having no paramenters

    Complex(int r, int i) : real(r), imag(i) {}

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    Complex operator-(Complex c)
    {
        Complex temp1;
        temp1.real=real-c.real;
        temp1.imag=imag-c.imag;
        return temp1;
    }    

    void display()
    {
        cout << real << "+" << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(3, 6), c2(9, 3), c3, c4(9, 32), c5;
    c3 = c1 + c2;      // equivalent to c3=c1.operator+(c2)
    c5 = c1 + c2 + c3; // adds from right to left i.e., first c2+c3 and then c1+result

    c1.display();
    c2.display();
    c3.display();

    cout<<endl
        <<endl;

    cout<<"c1+c2"<<endl;
    c3.display();
    cout<<endl<<"c1+c2+c3"<<endl;
    c5.display();

    cout<<endl
        <<endl;
    
    c3=c1-c2;
    cout<<"c1-c2"<<endl;
    c3.display();

    c5=c1-c2-c4; // Firstly -c2-c4 and then +c1
    cout<<endl<<"c1-c2-c3"<<endl;
    c5.display();

}