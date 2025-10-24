#include<iostream>
using namespace std;

class Unary
{
    int x;
    public:
    Unary(): x(0) {}
    Unary(int n): x(n) {}
/*
    void operator++()
    {
        ++x;
    }

    void operator++(int)
    {
        x++;
    }

    void operator--()
    {
        --x;
    }

    void operator--(int)
    {
        x--;
    }

    void operator-()
    {
        x=-x;
    }
    */

        void display()
    {
        cout<<"\n\n"<<x;
    }

    friend Unary operator++(Unary);
    friend Unary operator++(Unary,int);
    friend Unary operator--(Unary);
    friend Unary operator--(Unary,int);
    friend Unary operator-(Unary);

};

Unary operator++(Unary u)
{
    ++(u.x);
    return (u.x);
}

Unary operator++(Unary u, int)
{
    (u.x)++;
    return (u.x);
}

Unary operator--(Unary u)
{
    --(u.x);
    return (u.x);
}

Unary operator--(Unary u, int)
{
    (u.x)--;
    return (u.x);
}

Unary operator-(Unary u)
{
    u.x = -(u.x);
    return u.x;
}


int main()
{
    Unary u(10), u1,u2,u3,u4,u5;
    u.display();

    u1=++u;
    u1.display();

    u2=u++;
    u2.display();

    u3=--u;
    u3.display();

    u4=u--;
    u4.display();

   u5= -u;
    u5.display();
}