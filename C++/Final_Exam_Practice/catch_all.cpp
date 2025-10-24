#include<iostream>
using namespace std;

void sample(int n)
{
    try
    {
        if(n>0)
            throw n;
        else if(n==0)
            throw 'n';
        else
            throw (float)n;
    }
    catch(...)
    {
        std::cerr <<"Exception Occured!" << '\n';
    }
    
}

int main()
{
    int n;
    cout<<"Enter a no:";
    cin>>n;
    sample(n);
}