#include<iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public: 
    void setData()
    {
        cout<<"\nEnter id:"<<endl;
        cin>>id;
        count++;
    }

    void getData()
    {
        cout<<"\nThe id of employee "<<count<<" is "<<id<<endl;
    }

    static void totalEmployee()
    {
        cout<<"\n\nTotal employees: "<<count;
    }
};

int Employee::count;

int main()
{
    Employee e1,e2,e3;

    e1.setData();
    e1.getData();
    Employee::totalEmployee();

    e2.setData();
    e2.getData();
    Employee::totalEmployee();

    e3.setData();
    e3.getData();
    Employee::totalEmployee();
}