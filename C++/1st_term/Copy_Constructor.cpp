// A copy constructor is used if we want to replicate an object exactly same as that of any other objects i.e., it helps a object to resemble another object
#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number() : a(0) {} // default constructor

    Number(int x) : a(x) {} // parameterized constructor

    // When there is no copy constructor found then compiler itself supllies its own copy constructor rather than throwing an error
    Number(Number &object) // Copy Constructor
    {
        cout << "Copy Constructor is called!!" << endl;
        a = object.a;
    }

    void display()
    {
        cout << "Value of a is " << a << endl;
    }
};

int main()
{
    Number n1, n2, n3(10);
    n1.display();
    n2.display();
    n3.display();

    Number n5(n3); // Copy Constructor called
    n5.display();
}