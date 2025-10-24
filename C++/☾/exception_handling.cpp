#include<iostream>
using std::cin;
using std::cout;

int main()
{
    double x, y;
    cout<<"Enter two numbers:";
    cin>>x>>y;
    try
    {
    if(y!=0)
        cout<<x<<"/"<<y<<"="<<x/y;
    else
        throw y;
    }

    catch(double n)
    {
        std::cerr<<std::endl<<"2nd no is zero!\ni.e., y="<<n;
    }
}