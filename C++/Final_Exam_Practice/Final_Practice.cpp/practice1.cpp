#include<iostream>
using namespace std;

class Concatenate
{
    string firstName, secondName;

public:
    Concatenate(): firstName("Unknown"), secondName("Unknown") {}

    Concatenate(string firstName, string secondName)
    {
        this->firstName=firstName;
        this->secondName=secondName;
    }

    void display()
    {
        cout<<"\n"<<firstName+secondName;
    }
};

int main()
{
    string n1,n2;
    cout<<"\nEnter first and second name: ";
    cin>>n1>>n2;

    Concatenate c1,c(n1,n2);
    c.display();
    c1.display();
}