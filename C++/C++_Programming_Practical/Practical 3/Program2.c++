/*
WAP to swap numbers of two classes. Use one data from one class and another data from another class. Swap using the concept of friend function.
*/

#include<iostream>>
using namespace std;

class A
{
    int a;
    A()
    {
        cout<<"Enter a:";
        cin>>a;
    }
    friend void swap();
};

class B
{
    int b;
    B()
    {
        cout<<"Enter b:";
        cin>>b;
    }
    friend void swap();
};

void swap()
{
    A n1;
    B n2;
    int temp;
    cout<<"\nBefore Swapping:\na="<<n1.a<<"\nb="<<n2.b<<endl;
    temp=n1.a;
    n1.a=n2.b;
    n2.b=temp;
    cout<<"\n\nAfter Swapping:\na="<<n1.a<<"\nb="<<n2.b<<endl;
}

int main()
{
    swap();
}
