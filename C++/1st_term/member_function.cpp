#include<iostream>
using namespace std;

class Example
{
    int age;
    string name;

public:
    void getName(); // Declaration of member function inside class
    void get_age() // Declaration and definition of the member function inside the class
    {
        cout<<"Enter age:";
        cin>>age;
    }
    void display();
};

void Example::getName() // Defining member function outside the class
{
    cout<<"Enter name:";
    cin>>name;
}

void Example::display() // Defining member function outside the class
{
    cout<<"Name: "<<name<<"\nAge: "<<age;
}

int main()
{
    Example a;
    a.getName();
    a.get_age();
    a.display();
    return 0;
}