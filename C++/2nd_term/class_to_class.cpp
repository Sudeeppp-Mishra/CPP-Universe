//Polar to Rectangular
#include<iostream>
using namespace std;

class Polar
{
    double r, a;

public:
    Polar(): r(0), a(0) {}

    Polar(double r, double a): r(r), a(a) {}

    void display()
    {
        cout<<"Polar Co-ordinate:"<<"("<<r<<","<<a<<")"<<endl;
    }

    double returnr()
    {
        return r;
    }

    double returna()
    {
        return a;
    }
};

class Rectangular
{
    double x, y;

public:
    Rectangular(): x(0), y(0) {}

    Rectangular(double xco, double yco): x(xco), y(yco) {}

    Rectangular(Polar p)
    {
        x = p.returnr() * cos(p.returna());
        y=p.returnr() * sin(p.returna());
    }

    void showData()
    {
        cout<<"Rectangular Co-ordinate: ("<<x<<","<<y<<")"<<endl;
    }
};

int main()
{
    double angle, rad;
    cout<<"Enter distance and angle:";
    cin>>rad>>angle;
    Polar p(rad, angle);
    p.display();

    Rectangular r;
    r=p;
    r.showData();
    return 0;
}