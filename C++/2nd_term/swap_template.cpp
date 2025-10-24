#include<iostream>
using namespace std;

template <typename T>
void swap(T *t1, T *t2)
{
    T temp;
    temp = *t1;
    *t1 = *t2;
    *t2 = temp;
}

int main()
{
    char ch1, ch2;
    cout<<"Enter two characters to be swapped:";
    cin>>ch1>>ch2;
    cout<<endl<<"Before Swapping:\nch1: "<<ch1<<"\nch2: "<<ch2<<endl;
    swap<char>(&ch1, &ch2);
    cout<<endl<<"After Swapping:\nch1: "<<ch1<<"\nch2: "<<ch2<<endl;
    return 0;
}