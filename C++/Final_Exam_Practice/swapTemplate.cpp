#include<iostream>
using std::cin;
using std::cout;
using std::endl;

template <typename T>
void swap(T&, T&);

int main()
{
    int n1=5, n2=10;
    char ch1='S', ch2='M';
    float n11=10.4, n22=11.4;

    cout<<"\nBefore swapping: \n";
    cout<<"\nn1= "<<n1<<"\nn2= "<<n2<<endl;
    cout<<"\nch1= "<<ch1<<"\nch2="<<ch2<<endl;
    cout<<"\nn1= "<<n11<<"\nn2="<<n22<<endl;

    swap<int>(n1,n2);
    swap<char>(ch1,ch2);
    swap<float>(n11,n22);

    cout<<"\nAfter Swapping:\n";
    cout<<"\nn1="<<n1<<"\nn2="<<n2<<endl;
    cout<<"\nch1="<<ch1<<"\nch2="<<ch2<<endl;
    cout<<"\nn1="<<n11<<"\nn2="<<n22<<endl;
}

template <typename T>
void swap(T &first, T &second)
{
    T temp;
    temp=first;
    first=second;
    second=temp;

}