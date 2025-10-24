#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int code;

    Person(string name_, int code_)
    {
        name = name_;
        code = code_;
    }
};

class Admin : public virtual Person
{
protected:
    int year_of_experience;

    Admin(string name_, int code_, int year) : Person(name_, code_)
    {
        year_of_experience = year;
    }
};

class Account : public virtual Person
{
protected:
    int salary;

    Account(string name_, int code_, int sal) : Person(name_, code_)
    {
        salary = sal;
    }
};

class Record : public Admin, public Account
{
    int record_no;

public:
    Record(string name_, int code_, int year, int sal, int reco) : Person(name_, code_), Admin(name_, code_, year), Account(name_, code_, sal)
    {
        record_no = reco;
    }

    void display()
    {
        cout << "Name: " << name << "\nCode: " << code << "\nYear of Experience: " << year_of_experience << "\nSalary: " << salary
             << "\nRecord No: " << record_no << endl;
    }
};

int main()
{
    string name;
    int code, year, salary, record;
    cout << "Enter name, code, year of experience, salary and record no: ";
    cin >> name >> code >> year >> salary >> record;
    Record r(name, code, year, salary, record);
    r.display();
    return 0;
}