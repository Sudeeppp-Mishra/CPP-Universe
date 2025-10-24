#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"\nEnter age: ";
    cin>>age;

    try
    {
        if(age>=18)
            cout<<"\nAccess Granted...You are old enough!";
        else
            throw age;
    }
    catch(int age)
    {
        cout<<"\nException occurred you are "<<age<<" years old which is not enough";
    }
    
}