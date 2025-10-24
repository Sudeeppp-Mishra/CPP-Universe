#include<iostream>
using namespace std;

class A
{
    int n;
public:
    A(): n(10) {}

    void display()
    {
        cout<<"\nDisplay!   "<<n;
    }
};

int main()
{
    A *ptr;
    try
    {
        ptr = new A;
    }
    catch(bad_alloc)
    {
        std::cerr << "Bad Alloc: ERROR!!!"<< '\n';
    }
    
    ptr->display();
    delete ptr;
}