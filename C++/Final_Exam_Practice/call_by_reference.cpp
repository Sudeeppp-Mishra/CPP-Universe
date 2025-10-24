#include<iostream>
using namespace std;

void swap(int&, int&);
int main()
{
    int n1,n2;
    cout<<"Enter two no.s:";
    cin>>n1>>n2;
    cout<<"\nBefore Swapping:\n";
    cout<<"\na="<<n1<<"\nb="<<n2<<endl;
    swap(n1,n2);
    cout<<"\nAfter Swapping:\n";
    cout<<"\na="<<n1<<"\nb="<<n2<<endl;
}

void swap(int &n1, int &n2)
{
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
}