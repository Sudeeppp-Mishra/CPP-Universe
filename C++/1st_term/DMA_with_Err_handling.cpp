#include <iostream>
using namespace std;

class Data
{
    string name;
    int age;

public:
    void getName()
    {
        cout << "Enter name:";
        cin >> name;
    }

    void getAge()
    {
        cout << "Enter age:";
        cin >> age;
    }

    void display()
    {
        cout << "Name: " << name << "\nAge: " << age;
    }
};

int main()
{
    Data *d;
    try
    {
        d = new Data;
    }
    catch (bad_alloc)
    {
        std::cerr << "Bad Allocation Error!!" << '\n';
    }
    d->getName();
    d->getAge();
    d->display();
    return 0;
}