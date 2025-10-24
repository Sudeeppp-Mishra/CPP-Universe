#include<iostream>
#include<cmath>
using namespace std;

class Area
{
    double a,b,c;
public:
    Area(): a(0), b(0), c(0) {}

    Area(double a, double b, double c): a(a), b(b), c(c) {}

    double returnArea();
    double returnPerimeter();
};

double Area::returnArea()
{
    double s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

double Area::returnPerimeter()
{
    return (a+b+c)/2;
}

int main()
{
    double a,b,c;
    cout<<"Enter three sides of triangle: ";
    cin>>a>>b>>c;

    Area A(a,b,c);
    cout<<"\n\nArea: "<< A.returnArea();
    cout<<"\n\nPerimeter: "<< A.returnPerimeter();
    return 0;
}