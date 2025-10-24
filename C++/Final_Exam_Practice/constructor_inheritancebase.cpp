#include<iostream>
using namespace std;

class Base1
{
protected:
    int data;

    public:
    Base1(int n): data(n) {}
};

class Base2
{
protected:
    int data;

public:
    Base2(int n): data(n) {}
};

class Derived: public Base1, public Base2
{
    int data;

public:
    Derived(int a, int b, int c): Base1(a), Base2(b)
    {
        data=c;
    }

    void display()
    {
        cout<<"\nBase1 Data: "<<Base1::data<<"\nBase2 Data: "<<Base2::data<<"\nDerived Data: "<<data;
    }
};

int main()
{
    Derived d(5,10,15);
    d.display();
}