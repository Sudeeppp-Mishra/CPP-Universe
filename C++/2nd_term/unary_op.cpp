#include<iostream>
using namespace std;

class Unary
{
    int n1;

public:
    Unary(): n1(50) {}

    void operator++()
    {
        n1++;
    }

    void operator++(int)
    {
        ++n1;
    }

    void operator--()
    {
        n1--;
    }

    void operator--(int)
    {
        --n1;
    }
    void display()
    {
        cout<<n1<<endl;
    }
};

int main()
{
    Unary u1, u2;
    u1.display();
    ++u1;
    u1.display();
    u1++;
    u1.display();
    --u2;
    u2.display();
    u2--;
    u2.display();
    
}