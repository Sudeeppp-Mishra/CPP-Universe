#include<iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout<<"Enter two numbers:";
    cin>>n1>>n2;
    try
    {
        if(n2!=0)
            cout<<n1<<"/"<<n2<<"="<<n1/n2;
        else
            throw (n2);
    }
    catch(int n)
    {
        cerr<<"2nd no is "<<n;
    }
    
}