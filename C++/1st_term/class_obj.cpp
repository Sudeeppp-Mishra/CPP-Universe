// Program to take current details of an employee and then promote him to another post and also increase the salary
#include<iostream>
using namespace std;

class Employee
{
    string name;
    int salary;
    string position;
    int previous_salary;

public:
    void current_details()
    {
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your salary: ";
        cin>>salary;
        previous_salary=salary;
        cout<<"Enter your position: "<<position;
        cin>>position;
        cout<<endl
            <<endl;
    }

    void display();

    void updated_details()
    {
        top:
        cout<<"\n\nEnter new salary: ";
        cin>>salary;
        if(previous_salary>salary)
        {
            cout<<"Please enter salary more than that of before!!";
            goto top;
        }
        cout<<"Enter new position: ";
        cin>>position;
        cout<<endl
            <<endl;
    }
};

void Employee::display()
{
    cout<<"_-_-_-_-_-Employee Details_-_-_-_-_-"<<endl<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Salary: "<<salary<<endl;
    cout<<"Position: "<<position<<endl;
}

int main()
{
    Employee e;
    e.current_details();
    e.display();
    e.updated_details();
    e.display();
    return 0;
}