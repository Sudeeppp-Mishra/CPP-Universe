//Without using Constructor

#include<iostream>
using namespace std;

class Person
{
protected:
    string name;
    int code;
};

class Admin: public virtual Person
{
protected:
    int year_of_experience;
};

class Account: public virtual Person
{
protected:
    int salary;
};

class Record: public Admin, public Account
{
    int record_no;
public:
    void getData()
    {
        cout<<"Enter name and code:";
        cin>>name>>code;
        cout<<endl;
        cout<<"Enter year of experience:";
        cin>>year_of_experience;
        cout<<endl;
        cout<<"Enter your salary:";
        cin>>salary;
        cout<<endl;
        cout<<"Enter record no:"<<endl;
        cin>>record_no;
    }

    void display()
    {
        cout<<"Name: "<<name<<"\nCode: "<<code<<"\nYear of Experience: "<<year_of_experience<<"\nSalary: "<<salary<<"\nRecord No: "<<record_no;
    }
};

int main()
{
    Record r;
    r.getData();
    r.display();
}