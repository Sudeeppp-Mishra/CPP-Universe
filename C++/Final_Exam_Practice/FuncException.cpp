#include<iostream>
using namespace std;

void division(int x, int y)
{
    if(y!=0)
        cout<<x<<"/"<<y<<"="<<x/y<<endl;
    else
        throw y;
}

int main()
{
    int x,y;
    cout<<"\nEnter two no.s: ";
    cin>>x>>y;
    try
    {
        division(x,y);
    }
    catch(int n)
    {
        cout<<"2nd no is zero!";
    }
    
}   