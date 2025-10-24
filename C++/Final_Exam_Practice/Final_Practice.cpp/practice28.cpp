#include<iostream>
#include<cmath>
using namespace std;

class polar
{
    int r, ang;
    public:
    polar(): r(0), ang(0) {}

    polar(int r, int ang)
    {
        this->r=r;
        this->ang=ang;
    }

    int returnR()
    {
        return r;
    }

    int returnAng()
    {
        return ang;
    }

    void display()
    {
        cout<<r<<" , "<<"<"<<ang<<endl;
    }
};

class rect
{
    int x, y;
    public:
    rect():x(0), y(0) {}

    rect(polar p)
    {
        x=p.returnR()*cos(p.returnAng());
        y=p.returnR()*sin(p.returnAng());
    }

    void displayRect()
    {
        cout<<"x="<<x<<"\ny="<<y<<endl;
    }
};

int main()
{
    polar p(4,90);
    p.display();

    rect r;
    r=p;
    r.displayRect();
    return 0;
}