#include<iostream>
using namespace std;

class A
{
    int n1;

public:
    A(int n): n1(n){}

    friend void mean();
};

class B
{
    int n2;

public:
    B(int n): n2(n){}

    friend void mean();
};

void mean()
{
    A a;
    B b;
    cout<<"Mean of "<<a.n1<<" and "<<b.n2()<<" is "<<(a.n1+b.n2)/2<<endl;
}

int main()
{
    int n1,n2;
    cout<<"Enter two nos!"<<endl;
    cin>>n1>>n2;

    A a(n1);
    B b(n2);

    mean();
    return 0;
}
