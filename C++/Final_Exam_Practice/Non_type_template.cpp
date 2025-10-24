#include<iostream>
using std::cin;
using std::cout;

template <typename T1, int n>
void show(T1 a)
{
    cout<<"\na= "<<a<<"\nn="<<n;
}

int main()
{
    show<char, 6>('S');
}