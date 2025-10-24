#include<iostream>
using namespace std;

class A
{
    int x;
public:
    A()
    {
        x=6;
    }
    friend class B;
};

class B
{
    public:
        void showData()
        {
            A a;
            cout<<a.x<<endl;
        }
};

int main()
{
    B b;
    b.showData();
}