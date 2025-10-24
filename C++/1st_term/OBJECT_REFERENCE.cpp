#include<iostream>
using namespace std;

class A
{
    int a;

public:
    A()
    {
        cout<<"Enter a:";
        cin>>a;
    }
    friend void swap(A);
};

class B
{
    int b;

public:
    B()
    {
        cout<<"Enter b:";
        cin>>b;
    }
    friend void swap(B);
};

void swap(A &a, B &b)
{
    
}