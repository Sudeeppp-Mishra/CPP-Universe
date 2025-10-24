#include<iostream>
using namespace std;

int main()
{
    int* ptr= new int(5);
    cout<<"\n"<<*ptr<<endl;
    delete ptr;

    int* ptr1=new int[5];
    for(int i=0;i<5;i++)
    {
        cin>>ptr1[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<endl<< ptr1[i];
    }
    delete[] ptr1;
}