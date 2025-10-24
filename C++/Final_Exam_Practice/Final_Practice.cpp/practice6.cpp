#include<iostream>
using namespace std;

int main()
{
    int *ptr = new int(5);
    cout<<*ptr;
    delete ptr;

    int a=10;
    int *ptr1;
    ptr1 = new int;
    *ptr1=10;

    cout<<*ptr1;
    delete ptr1;

    const int SIZE=4;
    int *ptrArr = new int[SIZE];

    cout<<"\nEnter the data: ";
    for(int i=0;i<SIZE;i++)
    {
        cin>>ptrArr[i]; 
    }

    cout<<"\nDatas are:\n";
    for(int i=0;i<SIZE;i++)
    {
        cout<<ptrArr[i]<<"\t";
    }

     for(int i=0;i<SIZE;i++)
    {
        cout<<"\n\n\n"<<*(ptrArr+i)<<"\t";
    }

    delete []ptrArr;
}