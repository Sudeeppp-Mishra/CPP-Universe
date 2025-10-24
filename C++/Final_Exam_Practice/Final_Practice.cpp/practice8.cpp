#include<iostream>
using namespace std;

class Construct
{
    string *name;
public:
    Construct(): name(nullptr) {}

    Construct(string *naam)
    {
        name=new string;
        name=naam;
    }

    void display()
    {
        cout<<*name;
    }
};

int main()
{
    string name;
    cout<<"Enter name;";
    cin>>name;

    Construct c(&name);
    c.display();
}