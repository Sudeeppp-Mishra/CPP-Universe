/* Parent Class-> Data members/member functions: protected and Child Class -> Visibility Mode: private*/
#include<iostream>
using namespace std;

class parent
{
    protected:
    string name;
    void get_name()
    {
        cout<<"Enter your name:";
        cin>>name;
    }
};

class child:private parent
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
    cout<<name<<" is "<<age<<" years old";
    }
};

int main()
{
    child c;
    c.display();
}
