#include<iostream>
using namespace std;

template <typename T>
class Template
{
    public:
    template <typename T1>
    void display(T1 a);
};

template <typename T>
template <typename T1>
void Template<T>::display(T1 a)
{
    cout<<a;
}

int main()
{
    int b=10;
    Template<int> a;
    a.display(5);
    a.display(b);
}