/*
    WAP to swap integer, float and character value using templates
*/
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

template <typename T>

T swap(T *a, T *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main()
{
    int n1, n2;
    cout<<"Enter two datas: ";
    cin>>n1>>n2;
    cout<<"Before swapping: \n\n first data = "<<n1<<"\n second data = "<<n2<<endl;
    swap<int>(&n1, &n2);
    cout<<"After swapping: \n\n first data = "<<n1<<"\n second data = "<<n2;
}
