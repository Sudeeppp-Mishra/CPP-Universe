/*
              Base Class (A)
                    |
                    |
                    |
    Child Class of A (B) --> (Base class for C)
                    |
                    |
                    |
            Child Class of B (C)   
*/
#include<iostream>
using namespace std;

class BaseA
{
protected:
    string name;
};

class ChildA: public BaseA
{
protected:
    int age;
};

class Child: public ChildA
{
public:
    void getData()
    {
        cout<<"Enter naem and age:";
        cin>>name>>age;
    }
    void display()
    {
        cout<<"Name: "<<name<<"\nAge: "<<age;
    }
};

int main()
{
    Child c;
    c.getData();
    c.display();
    return 0;
}