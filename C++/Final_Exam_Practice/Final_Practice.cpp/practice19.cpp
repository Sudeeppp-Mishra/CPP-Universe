/*
    Create an abstract class shape with two member function getData() for initialization and area() for finding area of different shapes. Dervie two s
    pecific classes Triangel and rectangel which override the both function.
    Use those classes in main function and display the area of triangle and rectangle.
*/

#include<iostream>
#include<cmath>
using namespace std;

class Shape
{
public:
    virtual void getData()=0;
    virtual void area()=0;
};

class Triangle: public Shape
{
    int a,b,c;
    public:
    void getData() override
    {
        cout<<"\nEnter sides: ";
        cin>>a>>b>>c;
    }

    void area() override
    {
        int s=(a+b+c)/2;
        cout<<"\nArea: "<<sqrt(s*(s-a)*(s-b)*(s-c));
    }
};

class Rectangle: public Shape
{
    int a,b;
    public:
    void getData() override
    {
        cout<<"\nEnter sides: ";
        cin>>a>>b;
    }

    void area() override
    {
        cout<<"\nArea: "<<a*b;
    }
};

int main()
{
    Shape *ptr;
    ptr=nullptr;

    Triangle t;
    ptr=&t;
    ptr->getData();
    ptr->area();

    Rectangle r;
    ptr=&r;
    ptr->getData();
    ptr->area();
    return 0;
}