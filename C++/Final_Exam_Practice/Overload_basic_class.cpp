#include<iostream>
using namespace std;

class Dist
{
    int feet;
    float inches;
public:
    Dist(): feet(0), inches(0){}

    Dist& operator =(int meter)
    {
        float f;
        f=meter*3.28;
        feet=f;
        inches=(f-feet)*12;
        return *this;
    }

    void display()
    {
        cout<<feet<<" ft "<<inches<<" in ";
    }
};

int main()
{
    float m;
    cout<<"Enter meter: ";
    cin>>m;

    Dist d;
    d=m;
    d.display();
}