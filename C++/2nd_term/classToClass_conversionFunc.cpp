#include<iostream>
using namespace std;

class Kilo
{
    int kg;

public:
    Kilo(): kg(0) {}

    Kilo(int kg): kg(kg) {}

    void display()
    {
        cout<<"In Kg: "<<kg;
    }

    int returnKg()
    {
        return kg;
    }
};

class Gram
{
    int gm;

public:
    Gram(): gm(0){}

    Gram(Kilo k)
    {
        gm=(k.returnKg())*1000;
    }

    void display_gm()
    {
        cout<<"In gm:"<<gm;
    }
};

int main()
{
    int kg;
    cout<<"Enter in kg:";
    cin>>kg;

    Kilo k(kg);
    Gram g;
    g=k;
    g.display_gm();
}