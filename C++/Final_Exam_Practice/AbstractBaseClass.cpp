#include<iostream>
using namespace std;

class Base//Abstract Base class since it has a pure virtual or dummy function
{
    public:
    virtual void display()=0;
};

class Derived1: public Base
{
    public:
    void display() override
    {
        cout<<"\n|Hi|";
    }
};

class Derived2: public Base
{
    public:
    void display() override
    {
        cout<<"\n||Hi||";
    }
};

int main()
{
    Base *ptr;

    Derived1 obj1;
    ptr=&obj1;
    ptr->display();
    
    Derived2 obj2;
    ptr=&obj2;
    ptr->display();
    
}