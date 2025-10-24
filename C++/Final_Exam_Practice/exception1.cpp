#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter two no.s: ";
    cin>>x>>y;

    try
    {
        if(y!=0)
            cout<<endl<<x<<"/"<<y<<"="<<x/y;
        else
            throw y;
    }
    catch(int n)
    {
        cout<<"There is exception by zero!"<<endl;
        cout<<"Second no. is "<<n;    
    }
    
}