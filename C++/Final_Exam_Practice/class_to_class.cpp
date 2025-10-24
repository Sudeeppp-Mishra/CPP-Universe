//Using Constructor
#include<iostream>
#include<cmath>
using namespace std;

class polar
{
    double r, ang;
public:
    polar(double r, double ang): r(r), ang(ang) {}

    void displayPolar()
    {
        cout<<"\n(r,<): "<<"("<<r<<","<<ang<<")"<<endl;
    }

    double returnR()
    {
        return r;
    }

    double returnAng()
    {
        return ang;
    }
};

class Rectangular
{
    double x,y;
public:
    Rectangular(): x(0), y(0) {} 

    Rectangular(double xco, double yco): x(xco), y(yco) {}

    Rectangular(polar p)
    {
        x=p.returnR()*cos(p.returnAng());
        y=p.returnR()*sin(p.returnAng());
    }

    void showRect()
    {
        cout<<"\n(x,y): "<<"("<<x<<","<<y<<")";
    }
};

int main()
{
    int r,ang;
    cout<<"\nEnter r and angle: ";
    cin>>r>>ang;

    polar p(r,ang);
    Rectangular r1;
    r1=p;
}