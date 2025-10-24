#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a no: ";
    cin>>n;

    try
    {
        if(n!=0)
            cout<<"No is not zero!";
        else
            throw 'n';
    }
    catch(...)
    {
        std::cerr << "Exception ocurred!";
    }
    
}