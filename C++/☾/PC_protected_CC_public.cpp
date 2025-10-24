/* Parent Class-> Data members/member functions: protected and Child Class -> Visibility Mode: public*/
#include<iostream>
using namespace std;

class parent
{
    protected:
    string name;
    public:
    void get_name()
    {
        cout<<"Enter your name:";
        cin>>name;
    }
};

class child:public parent
{
    int age;
    public:
    child()
    {
        cout<<"Enter your age:";
        cin>>age;    
    }
    void display()
    {
    cout<<name<<" is "<<age<<" years old";
    }
};

int main()
{
    child c;
    c.get_name();
    c.display();
}