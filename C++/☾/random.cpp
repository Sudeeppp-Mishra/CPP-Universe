/*
WAP that reads firstName and secondName then concatenates them into name using constructor overloading.
*/
#include<iostream>
using namespace std;

class A
{
    string firstName, secondName, name;
public:
    A()
    {
        name="Unknown";
    }
    A(string n1, string n2)
    {
        firstName=n1;
        secondName=n2;
        name=firstName + " " + secondName;
         cout<<"Your full Name is "<<name;
    }

};
int main()
{
    string first, second;
    cout<<"Enter first name:";
    cin>>first;
    cout<<"Enter second name:";
    cin>>second;
    A a(first, second);

    return 0;
}