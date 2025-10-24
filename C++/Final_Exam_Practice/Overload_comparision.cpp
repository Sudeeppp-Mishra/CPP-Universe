#include<iostream>
using namespace std;

class Compare
{
    int data;
public:
    Compare(){}

    Compare(int data): data(data) {}

    bool operator>(Compare c)
    {
        if(data>c.data)
        {
            return true;
        }
        else
            return false;
    }

    void print(bool result)
    {
        if(result)
            cout<<"first no. is greater"<<endl;
        else
            cout<<"second no. is greater!"<<endl;
    }
};

int main()
{
    int n1,n2;
    cout<<"Enter two no.s: ";
    cin>>n1>>n2;

    Compare c1(n1), c2(n2);
    bool c3;
    c3=c1>c2;
    c1.print(c3);
}