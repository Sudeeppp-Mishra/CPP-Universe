#include<iostream>
using namespace std;

class Number
{
    int a;
public:
    Number(): a(0) {}

    Number(int num)
    {
        a=num;
    }

    Number(Number &obj)
    {
        cout<<"copy constructor called"<<endl;
        a=obj.a;
    }

    void display()
    {
        cout<<"The number for this object is "<<a<<endl;
    }
};

int main()
{
    Number x,y,z(34);
    x.display();
    y.display();
    z.display();
    Number z1(z);
    z1.display();
    //suppose a object z1 that should exactly resemble z then we can make a copy constructor

}