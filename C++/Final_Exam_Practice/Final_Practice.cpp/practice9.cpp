/*
Create a class that includes a data member that holds a serial number for each object created from a class i.e., the first object created will be 
numbered 1, 2nd will be numbered 2 and so on. (Use static member and function if needed).
*/
#include<iostream>
using namespace std;

class Static
{
    static int serialNo;
    int a;
    int count;

public:
    Static() {
        count=++serialNo;
    }

    Static(int n): a(n) {}

    void display()
    {
        cout<<count<<" object's Data Member: "<<a<<endl;
    }

    static void totalCount()
    {
        cout<<"\nTotal Objects:"<<serialNo;
    }
};

int Static::serialNo;

int main()
{
    int no;
    cin>>no;

    Static s(10), s2(no);
    s.display();
    s2.display();

    Static::totalCount();
}
