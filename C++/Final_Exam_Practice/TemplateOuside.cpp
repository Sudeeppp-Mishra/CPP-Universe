#include<iostream>
using namespace std;

template <typename T>
class A
{
    public:
    template <typename T1>
    void display(T1);
};

template <typename T>
template<typename T1>
void A<T>::display(T1 a)
{
    cout<<"\n"<<a;
}

int main()
{
    A<int>obj1;
    obj1.display(5);
}