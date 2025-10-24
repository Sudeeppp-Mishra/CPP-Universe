/* Parent Class-> Data members/member functions: private and Child Class -> Visibility Mode: protected*/
#include<iostream>
using namespace std;

class parent
{
    private:
    string name;
    public:
    void get_name()
    {
        cout<<"Enter your name:";
        cin>>name;
    }
    string returnName()
    {
        return name;
    }
};

class child:protected parent
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
    get_name();
    cout<<returnName()<<" is "<<age<<" years old";
    }
};

int main()
{
    child c;
    //c.get_name();
    c.display();
}