#include<iostream>
using namespace std;

class parent
{
    string name;
    public:
    string get_info()
    {
        cout<<"Enter name:";
        cin>>name;
        return name;
    }
};

class child1:protected virtual parent
{
    public:
    void display(){
    cout<<get_info();
    }
};

class child2:protected virtual parent
{
    
};

class child3:protected child1, protected child2
{
    public:
    child3()
    {
    display();
    }
};

int main()
{
    child3 c3;
}