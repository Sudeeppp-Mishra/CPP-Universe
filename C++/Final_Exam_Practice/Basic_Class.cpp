//Using Constructor
#include<iostream>
using namespace std;

class Conversion
{
    int meter, ft, in;

public:
    Conversion(): ft(0), in(0) {}

    Conversion(int meter)
    {
        this->meter=meter;
        float f;
        f = 3.28*meter;
        ft=f;
        in=(f-ft)*12;
    }

    void display()
    {
        cout<<meter<<"m is equivalent to "<<ft<<" ft "<<in<<" in";
    }
};

int main()
{
    int meter;
    cout<<"Enter dimension in meter: ";
    cin>>meter;
    Conversion c=meter;
    c.display();
}