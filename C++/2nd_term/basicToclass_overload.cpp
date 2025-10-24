#include<iostream>
using namespace std;

class Conversion
{
    int feet;
    float inches;

public:
    Conversion(): feet(0), inches(0) {}

    Conversion operator=(float meter)
    {
        float f;
        f = meter*3.28;
        feet = f;
        inches = (f-feet)*12;
        return *this;
    }

    void display()
    {
        cout<<feet<<" ft  "<<inches<<" in";
    }
};

int main()
{
    int meter;
    cout<<"Enter meters:";
    cin>>meter;

    Conversion c;
    c=meter;
    c.display();
}