/*
                    [Base Class 1]      [Base Class 2]
                        \                       /
                            \               /
                                \       /
                                    \/
                                [Child Class]
*/

#include <iostream>
using namespace std;

class Base1
{
protected:
    string name;
};

class Base2
{
protected:
    int age;
};

class Child : private Base1, private Base2
{
public:
    Child()
    {
        cout << "Enter name and age:";
        cin >> name >> age;
    }
    void display()
    {
        cout << "\nName: " << name << "\nAge: " << age;
    }
};

int main()
{
    Child c;
    c.display();
}