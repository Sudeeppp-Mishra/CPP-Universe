/*
        Polymorphism
        - one name and multiple forms
        - eg: Function Overloading, operator overloading, virtual function (run-time polymorphism)

        In C++ it can be of two types:
            1. Compile time polymorphism
                1.1: Operator Overloading
                1.2: Function Overloading
            2. Run time polymorphism
                2.1: Virtual Functions
*/

#include<iostream>
using namespace std;

class Base_I
{
public:
    void display()
    {
        cout<<"Hello, from base class"<<endl;
    }
};

class Derived_class_I: public Base_I
{
public:
    void display()
    {
        cout<<"Hello, from derived class I"<<endl;
    }
};

class Derived_class_II: public Base_I
{
public:
    void display()
    {
        cout<<"Hello, from derived class II"<<endl;
    }
};

// Solution for above code
class Base_II
{
public:
    virtual void showHello()
    {
        cout<<"Hello, from Base"<<endl;
    }
};

class Derived_II: public Base_II
{
public:
    void showHello() override
    {
        cout<<"Hello, from Derived"<<endl;
    }
};

int main()
{
    Derived_class_I objI;
    objI.display(); // Function overriding -> It calls the display function which is within itself

    Derived_class_II objII;
    objII.display(); // Function overriding -> It calls the display function which is within itself

    Base_I *ptr;
    // ptr is currently uninitialized, calling display() on it will result in undefined behavior
    // ptr->display(); // This line should be removed or ptr should be initialized first

    //Initialization of pointer should be done so as to prevent from showing undefined behaviour, sometimes program may crash as well
    ptr=nullptr;

    ptr = &objI;
    ptr->display(); // Calls the display() of base class because display() is not virtual

    ptr = &objII;
    ptr->display(); // Calls the display() of base class because display() is not virtual

    // So as to solve this problem we use virtual functions in base class
    Base_II objIII, *ptr1;
    ptr1 = &objIII;
    ptr1->showHello();

    Derived_II objD;
    ptr1 = &objD;
    ptr1->showHello();

    return 0;
}