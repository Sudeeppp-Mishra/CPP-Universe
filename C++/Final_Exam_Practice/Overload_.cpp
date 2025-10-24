#include<iostream>
using namespace std;

class Overload
{
    int a;
    bool b;

public:
    Overload():a(0), b(true) {}

    void operator!()
    {
        a=!a;
        b=!b;
    }

    void print()
    {
        cout<<"\na: "<<a<<"\nb: "<<b;
    }
};

int main()
{
    Overload o;
    o.print();

    !o;
    o.print();
}