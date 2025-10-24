#include<iostream>
using namespace std;

class A
{
    protected:
    int data;
    public:
    A()
    {
        cout<<"\nEnter the data: ";
        cin>>data;
    }
};

class B
{
    protected:
    int data1;
    public:
    B()
    {
        cout<<"\nEnter another data: ";
        cin>>data1;
    }
};

class C: public A, public B
{
    int sum;
    public:
    void display()
    {
        sum=data1+data;
        cout<<"Data in class A: "<<data<<"\nData in class B: "<<data1<<"\nToatal: "<<sum;
    }
};

int main()
{
    C c;
    c.display();
}