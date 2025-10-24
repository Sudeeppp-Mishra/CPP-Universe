#include<iostream>
using namespace std;

class Calculator
{
    double a,b;

public:
    double division(double a, double b)
    {
        this->a=a;
        this->b=b;
        return a/b;
    }

    double multiplication(double a, int b)
    {
        this->a = a;
        this->b = b;
        return a*b;
    }

    double addition(int a, double b)
    {
        this->a=a;
        this->b=b;
        return a+b;
    }

    double subtract(int a, int b)
    {
        this->a=a;
        this->b=b;
        return a-b;
    }
};

int main()
{
    Calculator c;
    int n1,n2;
    cout<<"\nEnter two no.s: ";
    cin>>n1>>n2;

    cout<<n1<<"+"<<n2<<"="<<c.addition(n1,n2);
    cout<<endl<<n1<<"-"<<n2<<"="<<c.subtract(n1,n2);
    cout<<endl<<n1<<"*"<<n2<<"="<<c.multiplication(n1,n2);
    cout<<endl<<n1<<"/"<<n2<<"="<<c.division(n1,n2);
}