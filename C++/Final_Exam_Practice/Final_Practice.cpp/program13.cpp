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
#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person() {}

    Person(string name, int age) : name(name), age(age)
    {
        cout << "\nPerson's Constructor";
    }
};

class Admin : public virtual Person
{
protected:
    int yof;

public:
    Admin(string namee, int agee, int yof) : Person(namee, agee)
    {
        this->yof = yof;
        cout << "\nAdmin's constructor";
    }
};

class Account : public virtual Person
{
protected:
    int salary;

public:
    Account(int salary, int age, string name) : salary(salary), Person(name, age)
    {
        cout << "\nAccount's Constructor";
    }
};

class Record : public Admin, public Account
{
    int record_no;

public:
    Record(string name, int age, int yof, int salary, int record_no) : record_no(record_no), Admin(name, age, yof), Account(salary, age, name), Person(name, age)
    {
        cout << "\nReocor's constructor";
    }

    void display()
    {
        cout << "\n\nName: " << name << "\nAge: " << age << "\nYOE: " << yof << "\nSalary: " << salary << "\nRecord No: " << record_no << "\n";
    }
};

int main()
{
    string name;
    int age, yoe, salary, record_no;
    cout << "\nEnter name, age, year of experience, salary and record no: ";
    cin >> name >> age >> yoe >> salary >> record_no;

    Record r(name, age, yoe, salary, record_no);
    r.display();
    return 0;
}