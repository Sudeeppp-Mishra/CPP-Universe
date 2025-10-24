#include<iostream>
using namespace std;

class conversion
{
    int feet;
    float inches;

public:
    conversion(): feet(0), inches(0) {}

    conversion(float meter)
    {
        float ft;
        ft=meter*3.28;
        feet = ft;
        inches = (ft-feet)*12;
    }

    void display()
    {
        cout<<feet<<"ft "<<inches<<"in";
    }
};

int main()
{
    float m;
    cout<<"Enter meters:";
    cin>>m;

    conversion c=m;
    c.display();
}