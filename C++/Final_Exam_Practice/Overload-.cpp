#include<iostream>
using namespace std;

class Overload
{
    int no;

public:
Overload(): no(10) {}
    void print()
    {
        cout<<"\n"<<no;
    }

    void operator-()
    {
        no=-no;
    }
};

int main()
{
    Overload o;
    o.print();
    -o;
    o.print();
}
