#include<iostream>
using namespace std;

class Dynamic_Constructor
{
    string *name;
    public:
    Dynamic_Constructor(string *naam)
    {
        name=new string;
        name=naam;
    }
    void display()
    {
        cout<<"\n"<<*name;
    }
};

int main()
{
    string var="Hello";
    Dynamic_Constructor d(&var);
    d.display();
    return 0;

}