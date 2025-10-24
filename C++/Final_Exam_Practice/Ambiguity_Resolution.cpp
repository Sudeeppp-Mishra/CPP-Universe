#include<iostream>
using namespace std;

class A
{
    public:
    void display()
    {
        cout<<"\nDisplay from class A!"<<endl;
    }
};

class B: public A
{
    public:
    void display()
    {
        cout<<"\nDisplay from class B!"<<endl;
    }
};

int main()
{
    B b;
    b.A::display();
    b.B::display();
}