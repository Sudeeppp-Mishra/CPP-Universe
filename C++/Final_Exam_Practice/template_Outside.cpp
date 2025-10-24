#include<iostream>
using namespace std;

template <typename T>
class A
{
    public:
    template <typename T1>
    void display(T1 a)
    {
        cout<<"\n"<<a;
    }

    template <typename T1>
    void display(T1 a, int times);
};

template <typename T>
template <typename T1>
void A<T>::display(T1 a, int times)
{
    int i;
    for(i=0;i<times;i++)
    {
        cout<<"\n\n"<<a;
    }
}

int main()
{
    A<int> obj1;
    obj1.display(5);
    obj1.display(4,6); 
}