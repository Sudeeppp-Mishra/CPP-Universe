#include<iostream>
using namespace std;

void sample(int n)
{
    try
    {
        if(n!=0)
            cout<<"Value is: "<<n;
        else
            throw n;
    }
    catch(int n)
    {
        cout<<"Value is 0 ";
        throw;
    }
}

int main()
{
    try
    {
        sample(10);
        sample(0);
    }
    catch(...)
    {
        std::cerr << "Exception";
    }
    
}