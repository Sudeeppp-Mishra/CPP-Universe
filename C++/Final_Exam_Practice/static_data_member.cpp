#include<iostream>
using namespace std;

class A
{
    static int count;
    string name;
    
public:
    void getname()
    {
        cout<<"\nEnter name for " <<++count<<" object : ";
        cin>>name;
    }
    void display()
    {
        cout<<"\nName for "<<count<<" Object: "<<name;
    }

    void totalCount()
    {
        cout<<"\n|TOTAL OBJECTS CREATED: "<<count<<"|";
    }
};

int A::count=0;
int main()
{
    A a1;
    a1.getname();
    a1.display();

    A a2, a3;
    a2.getname();
    a2.display();

    a3.getname();
    a3.display();

    a1.display();
    a2.display();
    a3.display();

    a1.totalCount();
    a2.totalCount();
    a3.totalCount();
}