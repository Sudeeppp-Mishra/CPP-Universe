#include<iostream>
using namespace std;

class Base
{

public:
    void display()
    {
        cout<<"Hello from base class!";
    }
};

class Derived: public Base
{

public:
    void display()
    {
        cout<<"Hello from derived class";
    }
};

int main()
{
    Derived d;
    d.display();//ovverriding 
    return 0;
}