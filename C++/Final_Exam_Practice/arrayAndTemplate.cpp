#include<iostream>
using namespace std;

template <typename T>
void Display(T arr)
{
        cout<<"\n"<<arr;
}

int main()
{
    int arr1[5]={1,4,2,5,5};
    for(int i=0;i<5;i++)
         Display<int>(arr1[i]);

    char arr[5]={'S','U','D','E','E'};
    for(int i=0;i<5;i++)
        Display<char>(arr[i]);
}