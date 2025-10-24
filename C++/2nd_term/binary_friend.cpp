#include<iostream>
using namespace std;

class Binary
{
    int n, result;

public:
    Binary(): n(0) {}

    Binary(int n): n(n) {}

    void display()
    {
        cout<<"Result="<<result;
    }

    friend Binary operator+(Binary &, Binary);
};

Binary operator+(Binary & b1, Binary b)
{
    Binary temp;
    temp.result = b1.n + b.n;
    return temp;
}

int main()
{
    int n1, n2;
    cout<<"Enter two no.s:";
    cin>>n1>>n2;
    Binary b1(n1), b2(n2), b3;
    b3=b1+b2;
    b3.display();
    return 0;
}