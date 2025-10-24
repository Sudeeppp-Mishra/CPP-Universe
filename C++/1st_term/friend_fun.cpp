#include<iostream>
#define PI 3.14
using namespace std;

class area
{
    int r;

public:
    void get_radius()
    {
        cout<<"Enter radius:";
        cin>>r;
    }
    friend void Area(area);
};

void Area(area a)
{
    double A=PI*(a.r)*(a.r);
    cout<<"Area: "<<A;
}

int main()
{
    area a;
    a.get_radius();
    Area(a);
    return 0;
}