#include<iostream>
using namespace std;

class Unary_Overload
{
    int x;

public:
    Unary_Overload(): x(0) {}

    Unary_Overload(int n): x(n) {}

    Unary_Overload operator++()
    {
        ++x;
        return *this;
    }

    Unary_Overload operator++(int)
    {
        x++;
        return *this; // This is best practice
    }

    Unary_Overload operator--()
    {
        --x;
        return x; //Due to implicit typecasting it also works fine
    }

    Unary_Overload operator--(int)
    {
        x--;
        return x;
    }

    void printNo()
    {
        cout<<"\n"<<x;
    }
};

int main()
{
    Unary_Overload u(5), uu;

    uu=u++;
    uu.printNo();

    ++u;
    u.printNo();

    u--;
    u.printNo();
    --u;
    u.printNo();
}