#include<iostream>
using namespace std;

void swap(int*,int*);
int main()
{
    int a, b;
    cout<<"Enter two no.s:";
    cin>>a>>b;
    cout<<"\nBefore swapping\n\t\ta="<<a<<"\n\t\tb="<<b<<endl;
    swap(&a,&b);
    cout<<"Value after swapping\n\t\ta="<<a<<"\n\t\tb="<<b;
}

void swap(int *n1, int *n2)
{
    *n1=*n1+*n2;
    *n2=*n1-*n2;
    *n1=*n1-*n2;
}