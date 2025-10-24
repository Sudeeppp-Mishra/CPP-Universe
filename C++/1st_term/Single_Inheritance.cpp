/*
                [Base Class/ Parent Class]
                            |
                            |
                            |
               [Child Class/ Derived Class]
*/
#include<iostream>
using namespace std;

class Base
{
    string name;
protected:
    int n;
    void getData()
    {
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter a no:";
        cin>>n;
    }
    string returnName()
    {
        return name;
    }
};

class Child: public Base // Single Inheritance
{
public:
    void display()
    {
        getData();
        cout<<"Name: "<<returnName()<<"\nNo: "<<n;
    }
};

int main()
{
    Child c;
    c.display();
}