#include<iostream>
using namespace std;

void sample(int n)
{
    try
    {
        if(n==0)
            throw n;
        else
            cout<<"No Exception!";
    }
    catch(int n)
    {
        std::cerr<<"Exception within function:"<<n;
        throw;
    }
}

int main()
{
    int a;
    cout<<"Enter a no:";
    cin>>a;
    try
    {
        sample(a);
    }
    catch(...)
    {
        cout<<"\nException within main function!";
    }
}