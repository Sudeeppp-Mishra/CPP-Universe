#include<iostream>
using std::cin;
using std::cout;
using std::endl;

template <typename T>

void max(T a, T b)
{
    if(a>b)
        cout<<a<<" is max"<<endl;
    else if(a<b)
        cout<<b<<" is max"<<endl;
    else
        cout<<"Both are equal!"<<endl;
}

int main()
{
    int a, b;
    cout<<"Enter two nums:";
    cin>>a>>b;
    max<int>(a,b);
    return 0;
}