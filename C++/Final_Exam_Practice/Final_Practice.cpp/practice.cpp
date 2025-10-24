#include<iostream>
using namespace std;

class Test
{
    string name;
    string Univ;

    public:
    int age;
    void get_name() //Defining member function inside class
    {
        cout<<"\nEnter name:";
        cin>>name;
    }

    void get_Univ(); // Declaration of member functino

    void display()
    {
        cout<<"\nName: "<<name<<"\nUniversity: "<<Univ<<"\nAge: "<<age<<endl;
    }
};

int main()
{
    Test t;
    t.get_name();
    t.get_Univ();
    cout<<"\nEnter age:";
    cin>>t.age;
    t.display();
    return 0;
}

void Test::get_Univ() // Definition outside class
{
    cout<<"\nEnter Universtiy: ";
    cin>>Univ;
}