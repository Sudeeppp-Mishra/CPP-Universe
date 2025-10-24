/*
    WAP that shows the working of calculator using class/function template in CPP
*/

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

template <typename T1, typename T2>
class Calculator
{
    T1 a;
    T2 b;
public:
    Calculator(T1 x, T2 y)
    {
        a = x;
        b = y;
    }

    void add()
    {
        cout<<a<<"+"<<b<<"="<<a+b;
    }

/*
void subtract(T1 a, T2 b) // We can't do this, we need to make new templates for this function so for solving this we can use class template
{
    cout<<a<<"-"<<b<<"="<<a-b;
}
*/
    void subtract()
    {
        cout<<a<<"-"<<b<<"="<<a-b;
    }

    void multiply()
    {
        cout<<a<<"*"<<b<<"="<<a*b;
    }
};

int main()
{
    int a,b;
    char operator_;
    cout<<"Enter two no.s:";
    cin>>a>>b;
    cout<<endl<<"Enter the operator: ";
    cin>>operator_;
    Calculator<int, int>obj(a,b);

    switch(operator_)
    {
        case '+':
            obj.add();
            break;
        
        case '-':
            obj.subtract();
            break;

    }
}