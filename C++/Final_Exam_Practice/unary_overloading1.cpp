#include<iostream>
using namespace std;

class Overload
{
    int no;

public:
    Overload():no(0) {}

    Overload(int n):no(n){}

    void print()
    {
        cout<<"\n"<<no;
    }

    Overload operator++()
    {
        return Overload(++no);
    }

    Overload operator++(int)
    {
        return Overload(no++);
    }

    Overload operator--()
    {
        return Overload(--no);
    }

    Overload operator--(int)
    {
        return Overload(no--);
    }
};

int main()
{
    Overload o(10);

    o++;
    o.print();
    ++o;
    o.print();

    o--;
    o.print();
    --o;
    o.print();
}