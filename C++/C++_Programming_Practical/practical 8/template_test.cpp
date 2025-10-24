#include<iostream>
using namespace std;

template <typename T1, typename T2>

T2 concatenate(T1 data1, T2 data2)
{
    return data1+data2;
}

int main()
{
    cout<<concatenate<int,float>(4,5.6);
    cout<<endl<<concatenate<string,string>("Hi","Hello");
}