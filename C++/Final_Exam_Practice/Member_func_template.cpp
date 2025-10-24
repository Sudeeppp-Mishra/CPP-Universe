#include<iostream>
using namespace std;

class A
{
    public:
    template <typename T>
    void display(T a, T b)
    {
        cout<<"\n\n"<<a+b;
    }
};

int main()
{
    A a;
    a.display<int>(56,44);
    return 0;
}

