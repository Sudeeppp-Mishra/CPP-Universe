#include<iostream>
using namespace std;

class A
{
    public:
    void display()
    {
        cout<<"Hello!";
    }

    A& hello()
    {
        cout<<"\nHI";
        return *this;
    }
};

int main()
{
    A a;
    a.hello().display();
}