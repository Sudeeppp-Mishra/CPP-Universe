#include<iostream>
using namespace std;

class A
{
    int a;
public:
    A& seData(int a)
    {
        this->a=a;
        return *this;
    }

    void getData()
    {
        cout<<"The value of a is: "<<a<<endl;
        cout<<this<<endl;
        cout<<"\n"<<this->a<<endl;
        cout<<&a<<endl;
    }
};

int main()
{
    //this is a keyword which is a pointer which points 
    //to the object invokes the member function

    //It points to the object through which member functions were invoked
    //It can also return object by writing 'return this' then we get the object 
    A a;
    a.seData(4).getData();
    //a.getData();
    return 0;
}