#include<iostream>
using namespace std;

class Binary_Overload
{
    int l, b, h;
public:
    Binary_Overload() {}
    Binary_Overload(int l, int b, int h):l(l),b(b),h(h){}

    friend Binary_Overload operator+(Binary_Overload, Binary_Overload);

    void display()
    {
        cout<<"\n\nVolume: "<<(l*b*h);
    }
};

Binary_Overload operator+(Binary_Overload b, Binary_Overload b1)
{
    Binary_Overload temp;
    temp.l=b.l+b1.l;
    temp.b=b.b+b1.b;
    temp.h=b.h+b1.h;
    return temp;
}
 
int main()
{
    Binary_Overload v1(5,6,7), v2(1,2,3), v3;
    v1.display();
    v2.display();
    v3=v1+v2;
    v3.display();
    return 0;
}