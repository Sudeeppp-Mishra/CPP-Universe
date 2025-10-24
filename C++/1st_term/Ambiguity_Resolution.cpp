#include<iostream>
using namespace std;

class Base
{
protected:
    string name;

public:
    Base()
    {
        cout<<"Enter name:";
        cin>>name;
    }
    void display()
    {
        cout<<"welcome!"<<endl;
    }
};

class Child: public Base
{
public:
    void display() // Ambiguity since same function name is used inside base class and this class inherits that function as well which means there are two display()
                   // named functions inside this class so display() function will be ambiguious
    {
        cout<<name<<", ";
    }
};

int main()
{
    Child c;
    cout<<endl<<endl<<"Function overriding!"<<endl;
    c.display(); // It will cause problem of function overriding and the display() funtion of Child class will be executed;

    cout<<endl
        <<endl;

    c.Child::display(); // Ambiguity Resolution
    c.Base::display(); // Ambiguity Resolution
    return 0;
}