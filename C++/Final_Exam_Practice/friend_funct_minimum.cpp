#include<iostream>
using namespace std;

class B;

class A
{
    int n1;

    friend void min(A,B);
public:
    void getNum1()
    {
        cout<<"\nEnter first no: "<<endl;
        cin>>n1;
    }
};

class B
{
    int n2;

    friend void min(A, B);
public:
    void getNum2()
    {
        cout<<"\nEnter another no:"<<endl;
        cin>>n2;
    }
};

int main()
{
    A a;
    a.getNum1();
    B b;
    b.getNum2();

    min(a,b);
}

void min(A a, B b)
{
    if(a.n1>b.n2)
        cout<<b.n2<<" is minimum no!"<<endl;
    else if(a.n1<b.n2)
        cout<<a.n1<<" is minimum no!"<<endl;
    else
        cout<<a.n1<<" and "<<b.n2<<" are equal!"<<endl;
}