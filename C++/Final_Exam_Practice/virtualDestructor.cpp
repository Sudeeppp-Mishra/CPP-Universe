#include<iostream>
using namespace std;

class base
{
    public:
virtual ~base()
{
    cout<<"\nBase destructor!";
}
};

class derived: public base
{
    public:
    ~derived()
    {
        cout<<"\nDerived destructor!";
    }
};

int main()
{
    base *ptr=new derived;
    delete ptr;
    return 0;
}