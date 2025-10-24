#include <iostream>
using namespace std;

class overloading2
{
private:
    int data;
    string s;

public:
    overloading2(int data) : data(data) {} // this->data(data) -->Error

    overloading2(string s)
    {
        this->s = s; // s=s -->Not an error but shows garbage value
    }
    void display()
    {
        cout << "Data: " << data;
    }

    void display1()
    {
        cout << "\nString: " << s;
    }
};

int main()
{
    overloading2 o(10), o1("Sudeep");
    o.display();
    o1.display1();
    return 0;
}
