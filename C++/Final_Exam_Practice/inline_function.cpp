#include<iostream>
#include<cmath>
using std::cin;
using std::cout;
using std::endl;

inline double addition(double a, double b)
{
    return a+b;
}

double inline multiplication(double a, double b)
{
    return a*b;
}

inline double square_root(double n)
{
    return sqrt(n);
}

int main()
{
    double a=0.5, b=144;
    cout<<"Addition: "<<addition(a,b);
    cout<<endl<<"Multiplication: "<<multiplication(a,b);
    cout<<endl<<"Square root: "<<square_root(b);
}