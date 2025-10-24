//Basic to Basic using constructors

#include<iostream>
using namespace std;

class Conversion
{
    int ft, in, meters;
    public:
    Conversion(): ft(0), in(0){}

    Conversion(int meter):meters(meter)
    {
        float f;
        f=meters*3.28;
        ft=f;
        in=(f-ft)*12;
    }

    void display()
    {
        cout<<meters<<"m = "<<ft<<" ft "<<in<<" in.";
    }
};

int main()
{
    int n;
    cout<<"Enter in mters;";
    cin>>n;

    Conversion c=n;
    c.display();
}