#include<iostream>
using namespace std;

class areaCircle;//Forward Declaration

class areaRectangle
{
    int l,b;

public:
    void getDimesion()
    {
        cout<<"Enter length and breadth:";
        cin>>l>>b;
    }
    friend void Area(areaRectangle, areaCircle);
};

class areaCircle
{
    int r;

public:
    void getRadius()
    {
        cout<<"Enter radius:";
        cin>>r;
    }
    friend void Area(areaRectangle,areaCircle);
};

void Area(areaRectangle r, areaCircle c)
{
    int area_Rect=r.l*r.b;
    int area_Cir=c.r*c.r*3.14;
    cout<<"Area of rectange is "<<area_Rect<<" and of cirlce is "<<area_Cir;
}

int main()
{
    areaRectangle r;
    areaCircle c;
    r.getDimesion();
    c.getRadius();
    Area(r, c);
    return 0;
}