#include<iostream>
using namespace std;

class A
{
    int a;

public:
    A(int n): a(n) {}

    void display()
    {
        cout<<"\nData in base class: "<<a<<endl;
    }
};

class B: public A
{
    public:
    B(int i): A(i) {}
};

int main()
{
    B b(10);
    b.display();
    return 0;
}