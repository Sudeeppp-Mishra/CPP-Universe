#include<iostream>
#define SIZE 100
using namespace std;

class Employee
{
    string name;

    public:
    void get_name()
    {
        cout<<"\nEnter name:";
        cin>>name;
    }

    void display()
    {
        cout<<"\nName: "<<name;
    }
};

int main()
{
    int n;
    cout<<"Enter no of employees:";
    cin>>n;
    Employee e[SIZE];

    for(int i=0;i<n;i++)
    {
        e[i].get_name();
    }

    cout<<"\nEMPLOYEES\n\n";

    for(int i=0;i<n;i++)
    {
        e[i].display();
    }
}