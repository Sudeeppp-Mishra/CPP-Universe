#include<iostream>
using namespace std;

class A
{
    protected:
    int data1, data2;
    public:
    A(): data1(5), data2(10) {}
};

class addition: public A
{
    public:
    void sum()
    {
        cout<<endl<<data1<<"+"<<data2<<"="<<data1+data2<<endl;       
    }
};

class subtraction: public A
{
    public:
    void subtract()
    {
        cout<<data1<<"-"<<data2<<"="<<data1-data2<<endl;
    }
};

class multiplication: public A
{
    public:
    void multi()
    {
        cout<<data1<<"*"<<data2<<"="<<data1*data2<<endl;
    }
};

int main()
{
    addition a;
    a.sum();

    subtraction s;
    s.subtract();

    multiplication m;
    m.multi();
}