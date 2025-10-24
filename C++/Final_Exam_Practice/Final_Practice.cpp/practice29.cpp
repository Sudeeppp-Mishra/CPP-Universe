//class to class using conversion function
#include<iostream>
#include<cmath>
using namespace std;

class rect
{
    int x,y;
    public:
    rect(): x(0), y(0) {}

    rect(int x, int y): x(x), y(y) {}

    void display()
    {
        cout<<"(x,y): "<<"("<<x<<","<<y<<")"<<endl;
    }
};

class polar
{
    int r, ang;
    public:
    polar(): r(0), ang(0) {}

    polar(int r, int ang): r(r), ang(ang) {}

    operator rect()
    {
        int x=r*cos(ang);
        int y=r*sin(ang);
        return rect(x,y);
    }

    void dispaly()
    {
        cout<<"(r,<): "<<"("<<r<<","<<ang<<")"<<endl;
    }
};

int main()
{
    polar p(1, 90);
    rect r;
    p.dispaly();
    r=p;
    r.display();
}