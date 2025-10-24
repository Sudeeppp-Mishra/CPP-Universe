/*
WAP to print the area of a rectangle by creating a class named 'Area' taking the value of its length and breadth as parameters of its constructors and having a function
named 'returnArea' which retruns the area of the rectangle . Length and breadth of a rectangle are entered through keyboard.
*/

#include<iostream>
using namespace std;
double returnArea(double, double);

class Area
{
    double length, breadth, A;
    public:
    Area(double l, double b, double area)
    {
        length=l;
        breadth=b;
        A=area;
        cout<<"Area of rectangle having lenght "<<length<<" and breadth "<<breadth<<" is "<<area;
    }
    ~Area()
    {
        cout<<"\n\n Object destructed successfully!!";
    }
};
int main()
{
    double l,b;
    cout<<"Enter the lenght and breadth:";
    cin>>l>>b;
    Area s(l,b,returnArea(l,b));
}

double returnArea(double l, double b)
{
    double area;
    area=l*b;
    return area;
}