#include<iostream>
using namespace std;

class Decrement
{
    int data;
public:
    Decrement(int a)
    {
        data=a;
    }

    Decrement operator --()
    {
        data=--data;
        return data;
    }

    Decrement operator --(int)
    {
        data=data--;
        return data;
    }

    void display()
    {
        cout<<data<<endl;
    }
};

int main()
{
    Decrement d(10), d1(0);
    d1=--d;
    d1.display();
    d1=d--;
    d1.display();
}