/* Parent Class-> Data members/member functions: public and Child Class -> Visibility Mode: private*/
#include<iostream>
using namespace std;

class parent
{
    public:
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
    get_name(); /*get_name() is called here because only child class can access get_name due to private visibility mode. So, I can't directly access name using object
                i.e., if I don't call this function inside child and directly wrote c.display() then name won't be displayed.*/
    cout<<name<<" is "<<age<<" years old";
    }
};

int main()
{
    child c;
    //c.get_name();
    c.display();
}