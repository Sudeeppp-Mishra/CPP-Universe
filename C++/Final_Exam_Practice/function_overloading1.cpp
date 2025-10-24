#include<iostream>
using namespace std;

class Calculation
{
    double r, l, b, ls;

public:
    double area(double r)
    {
        this->r=r;
        return 3.14*r*r;
    }

    double area(double l, double b)
    {
        this->l=l;
        this->b=b;
        return l*b;
    }

    double area(int ls)
    {
        this->ls=ls;
        return ls*ls;
    }
};

int main()
{
    double r,l,b,ls;
    cout<<"\nEnter radius of circle: ";
    cin>>r;
    Calculation c;
    cout<<"\nCircle's Area: "<<c.area(r);
    cout<<"\nEnter lenght and breadth of rectangle: ";
    cin>>l>>b;
    cout<<"\nRectangle's Area: "<<c.area(l,b);
    cout<<"\nEnter side of square: ";
    cin>>ls;
    cout<<"\nSquare's Area: "<<c.area((int)ls);
}