#include<iostream>
using namespace std;

class No2;

class No1
{
    int n1;
public:
    No1():n1(0) {}
    
    No1(int n): n1(n) {}

    friend double Mean(No1, No2);
};

class No2
{
    int n2;
public:
    No2(): n2(0) {}

    No2(int n): n2(n) {}

    friend double Mean(No1, No2);
};

double Mean(No1 n1, No2 n2)
{
    cout<<"Mean: "<<(n1.n1+n2.n2)/2;
}

int main()
{
    int n1,n2;
    cout<<"Enter two no.s: ";
    cin>>n1>>n2;

    No1 n11(n1);
    No2 n22(n2);

    Mean(n11,n22);
}