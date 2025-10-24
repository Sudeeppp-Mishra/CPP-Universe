#include <iostream>
using namespace std;

class Base
{

public:
    virtual void display()
    {
        cout << "Hello, Base!" << endl;
    }
};

class Derived1 : public Base
{

public:
    void display() override
    {
        cout << "Hello, Derived1!" << endl;
    }
};

class Derived2 : public Base
{

public:
    void display() override
    {
        cout << "Hello, Derived2!" << endl;
    }
};

int main()
{
    Base *ptr, obj;

    ptr = &obj;
    ptr->display();

    Derived1 d1;
    ptr = &d1;
    ptr->display();

    Derived2 d2;
    ptr = &d2;
    ptr->display();

    return 0;
}