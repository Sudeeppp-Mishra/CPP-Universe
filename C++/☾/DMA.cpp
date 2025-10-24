#include<iostream>
using std::cout;
using std::cin;

int main() {
    int *ptr = new int[4];
    int i;
    cout<<"Enter 4 elements:";
    for(i=0;i<4;i++) {
        cin>>ptr[i];
    }
    cout<<"\nEntered elements are:\n";
    for(i=0;i<4;i++)
    {
        cout<<ptr[i]<<std::endl;
    }
    delete []ptr;
    return 0;
}