#include<iostream>
using namespace std;

void sample(int n)
{
    if(n>0)
        throw n;
    else if(n==0)
        throw 'e';
    else
        throw (float)n;
}

int main()
{
    int n;
    cout<<"Enter a no:";
    cin>>n;
    try
    {
        sample(n);
    }
    catch(int n)
    {
        cout<<"Exception...integer found!-->"<<n;
    }
    catch(char ch)
    {
        cout<<"Exception...Character found!-->"<<ch;
    }
    catch(float n)
    {
        cout<<"Exception...Floating point found!-->"<<n;
    }
    
}