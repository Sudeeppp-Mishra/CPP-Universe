#include<iostream>
using namespace std;

class Calculator
{
    
public:
    double calc(int n1, int n2)
    {
        return n1+n2;
    }

    double calc(int n1, double n2)
    {
        return n1-n2;
    }

    double calc(double n1, int n2)
    {
        return n1*n2;
    }

    double calc(double n1, double n2)
    {
        return n1/n2;
    }
};

int main()
{
    Calculator c;
    double n1, n2;
    cout<<"Enter two numbers:";
    cin>>n1>>n2;
    cout<<endl  
        <<endl;
    cout<<n1<<"+"<<n2<<"="<<c.calc((int)n1, (int)n2)<<endl;
    cout<<n1<<"-"<<n2<<"="<<c.calc((int)n1,n2)<<endl;
    cout<<n1<<"*"<<n2<<"="<<c.calc(n1,(int)n2)<<endl;
    cout<<n1<<"/"<<n2<<"="<<c.calc(n1,n2);
}