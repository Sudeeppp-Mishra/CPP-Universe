/*
                                            [Base Class]
                                                 /\
                                                /   \ 
                                              /       \
                                            /           \
                                [Child Class A]         [Child Class B]
*/
#include<iostream>
using namespace std;

class Base
{
protected:
    int a,b;

public:
    void getNo()
    {
        cout<<"Enter two no.s:";
        cin>>a>>b;
    }
};

class Class_A:public Base
{
public:
    void display_sum()
    {
        cout<<a<<"+"<<b<<"="<<a+b;
    }
};

class Class_B:public Base
{
public:
    void display_difference()
    {
        cout<<a<<"-"<<b<<"="<<a-b;
    }
};

int main()
{
    Class_A a;
    a.getNo();
    a.display_sum();
    Class_B b;
    b.getNo();
    b.display_difference();
    return 0;
}