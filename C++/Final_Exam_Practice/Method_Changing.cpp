//Method changing is the process of calling like different methods using a single object in a single line
#include<iostream>
using namespace std;

class Method_Changing
{
public:
    Method_Changing& printHello()//Returning by reference..when we return an object by reference, no copy is made. Instead, we are returning a reference to the same object in memory.
    {
        cout<<endl<<"hello"<<endl;
        return *this;
    }

    Method_Changing printHi()//Returning by Value..so here when we return an object by value, a copy of the object is made i.e., a new object is created that holds the same data as the original object.
    {
        cout<<endl<<"hi"<<endl;
        return *this;
    }

    void say()
    {
        cout<<endl<<"How are u?"<<endl;
    }
};

int main()
{
    Method_Changing m;
    m.printHello().printHi().say();
}