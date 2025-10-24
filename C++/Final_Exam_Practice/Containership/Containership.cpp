#include<iostream>
using namespace std;

class Data
{
    int n1, n2;
    public:
    Data() {}

    Data(int a, int b): n1(a), n2(b) {}

    int returnNo1()
    {
        return n1;
    }

    int returnNo2()
    {
        return n2;
    }
};

class Sum
{
    Data d;

    public:
    Sum(int a, int b):d(a,b) {}
    void sum()
    {
        cout<<d.returnNo1()<<"+"<<d.returnNo2()<<"="<<d.returnNo1()+d.returnNo2();
    }
};

int main()
{
    Sum s(6,6);
    s.sum();
}