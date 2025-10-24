#include<iostream>
#include<cmath>
using namespace std;

class rect
{
    int x,y;
    rect(): x(0), y(0) {}

    rect(int xco, int yco): x(xco), y(yco) {}

    void display()
    {
        cout<<"(x,y): ("<<x<<","<<y<<")"<<endl;;
    }
};

class polar
{
    int r,ang;
public:
    polar(): r(0), ang(0) {}

    polar(int r, int ang): r(r), ang(ang) {}

    operator rect()
    {
        int x1,y1;
        x1=r*cos(ang);
        y1=r*sin(ang);
        return rect(x1,y1);
    }
};

int main()
{
    polar p(3,53);
    rect r=p;
    r.display();
}