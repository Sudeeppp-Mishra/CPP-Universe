#include<iostream>
using namespace std;

class Constructor
{
    string name;

    public:
    Constructor();

    void display()
    {
        cout<<"\n "<<name;
    }
};

Constructor::Constructor()
{
    cout<<"\nEnter name: ";
    cin>>name;
}

int main()
{
    int n;
    cout<<"\nEnter no. of people: ";
    cin>>n;
    Constructor c[n];
    for(int i=0;i<n;i++)
        c[i].display();
}