/*
Using a class write a program that receives input principal amount, time and rate keeping rate 8% as default argument. Cacluate the simple interest
for three customers.
*/

#include<iostream>
using namespace std;

class SI
{
    double P, T, R;

public:
    SI():P(0), T(0), R(8) {}

    SI(double p, double t, double r=8): P(p), T(t), R(r) {}

    void CalculateAndPrint()
    {
        cout<<"\nSI: "<<(P*T*R)/100;
    }
};

int main()
{
    double p, t;
    cout<<"Enter principle and tim: ";
    cin>>p>>t;

    SI s(p,t);
    s.CalculateAndPrint();
}