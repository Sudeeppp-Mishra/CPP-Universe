#include<iostream>
using namespace std;

template <typename T1>
void show(T1 a)
{
    cout<<"\na="<<a;
}

template<typename T1, typename T2>
void show(T1 a, T2 b)
{
    cout<<"\n\n\na="<<a<<"\nb="<<b;
}

void show(int x)
{
    cout<<"\n\nx="<<x;
}

int main()
{
    show(100);
    show<int>(100);
    show<float, int>(1.3, 400);
    show(10,'A');
}