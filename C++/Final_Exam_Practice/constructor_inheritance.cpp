#include<iostream>
using namespace std;

class A
{
    int data1;
public:
    A(int n): data1(n) {}

    void display()
    {
        cout<<"\nData in base class:: "<<data1;
    }
};

class B: public A
{
    int data2;
    public:
    B(int a, int b): A(b)
    {
        data2=a;
    }

    void display()
    {
        cout<<"\nData in derived class:: "<<data2;
    }
};

int main()
{
    int n1,n2;
    cout<<"\nEnter two no.s: "<<endl;
    cin>>n1>>n2;

    B b(n1,n2);
    b.A::display();
    b.B::display();
}