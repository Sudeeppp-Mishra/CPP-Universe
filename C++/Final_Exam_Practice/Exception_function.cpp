#include<iostream>
#include<stdexcept>
using namespace std;

void Check_Age(int age)
{
    if(age>=18)
        cout<<"\nAccess Granted!!";
    else
        throw runtime_error("You are a minor!");
}

int main()
{
    int age;
    cout<<"\nEnter age: ";
    cin>>age;

    try
    {
        Check_Age(age);
    }
    catch(runtime_error e)
    {
        std::cerr <<"Error: "<< e.what() << '\n';
    }
    
}