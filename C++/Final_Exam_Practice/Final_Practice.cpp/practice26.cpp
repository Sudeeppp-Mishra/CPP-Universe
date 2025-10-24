//Basic to Class using operator overloading

#include<iostream>
using namespace std;

class Conversion
{
    int ft, in, m;
    public:
    Conversion() {}

    Conversion(int m): m(m) {}

    Conversion operator=(int m)
    {
        float f;
        f=m*3.28;
        ft=f;
        in=(f-ft)*12;
        return *this;
    }

    void display()
    {
        cout<<m<<"m="<<ft<<"ft"<<in<<"in";
    }
};

int main()
{
    Conversion c;
    c=10;
    c.display();
}