/*
                                        Person
                                      [name, age]
                                    /               \
                                /                       \
                            /                               \
                        Admin                             Account
                 [Year of Experience]                     [Salary]
                        \                                   /
                            \                            /
                                \                     /
                                    \              /
                                       \        /
                                         Record
                                       [Record No]
*/


#include<iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

    Person(string name, int age): name(name), age(age) {}
};

class Admin: public virtual Person
{
protected:
    int yearOfExperience;

    Admin(string name, int age, int year, int salary): yearOfExperience(year), Person(name, age) {}
};

class Account: public virtual Person
{
protected:
    int salary;

    Account(string name, int age, int YOE, int salary): salary(salary), Person(name, age) {}
};

class Record: public Admin, public Account
{
    int recordNo;

public:
    Record(string name, int age, int YOE, int salary, int recordNo): recordNo(recordNo), Admin(name, age, YOE, salary), Account(name, age, YOE, salary), Person(name, age) {}

    void display()
    {
        cout<<"Name: "<<name<<"\nAge: "<<age<<"\nYear of Experienc: "<<yearOfExperience<<"\nSalary: "<<salary<<"\nRecord No: "<<recordNo;
    }
};

int main()
{
    Record r("Sudeep", 18, 0, 0, 1235);
    r.display();
    return 0;
}