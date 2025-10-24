#include<iostream>
using namespace std;

class BaseI
{
    public:
    virtual void display() 
    {
        cout<<"\nHello from base class!";
    }
};

class DerivedI: public BaseI
{
    public:
    void display() override
    {
        cout<<"\nHello from 1st derived class!";
    }
};

class DerivedII: public BaseI
{
    public:
    void display() override
    {
        cout<<"\nHello from 2nd derived class!";
    }
};

int main()
{
    BaseI *ptr = new BaseI;
    BaseI objBase;

    ptr->display();
    ptr=&objBase;

    DerivedI objDer1;
    ptr=&objDer1;
    ptr->display();

    DerivedII objDer2;
    ptr=&objDer2;
    ptr->display();
    return 0;
    
}