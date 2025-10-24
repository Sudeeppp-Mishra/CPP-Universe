#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter age:";
    cin>>age;
    try
    {
        if(age>=18)
            cout<<"Access granted!";
        else
            throw(age);
    }
    catch(int age)
    {
        cerr<<"You are "<<age<<" which is not matched with our conditions!";
    }
    
}