#include<iostream>
using namespace std;

template <typename T>
class Test
{

public:
    template <typename T1>
    void display(T a)
    {
        cout<<"Value:"<<a<<endl;
    }


    template <typename T1>
    void display(T1[],int);
};

template <typename T>
template <typename T1>
void Test<T>::display(T1 arr[5], int b)
{
    for(int i=0;i<b;i++)
    {
        cout<<"Value: "<<arr[i]<<endl;
    }
}

int main()
{
    int arr[]={4, 5, 2, 7, 5};
    Test<int>obj;
    obj.display<int>(4);
    obj.display<int>(arr,5);
}