//By using Parameterized Constructor

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
    Record(string name_, int code_, int year, int sal, int reco)
    {
        name=name_;
        code=code_;
        year_of_experience=year;
        salary=sal;
        record_no=reco;
    }

    void display()
    {
        cout<<"Name: "<<name<<"\nCode: "<<code<<"\nYear of Experience: "<<year_of_experience<<"\nSalary: "<<salary<<"\nRecord No: "<<record_no;
    }
};

int main()
{
    string name;
    int code, year, salary, record;
    cout<<"Enter name, code, year of experience, salary and record no:";
    cin>>name>>code>>year>>salary>>record;
    Record r(name, code, year, salary, record);
    r.display();
    return 0;
}