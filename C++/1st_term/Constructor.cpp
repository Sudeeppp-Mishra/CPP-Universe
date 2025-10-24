#include<iostream>
using namespace std;

class Constructor
{
    string name;
    int age;
    int height;

public:
    Constructor()
    {
        cout<<"Enter age:";
        cin>>age;

    }
    Constructor(string name):name(name) { }
    Constructor(int);
    void display();
};

Constructor :: Constructor(int ht)
{
    cout<<"Enter height";
    cin>>ht;
    height=ht;
}

void Constructor::display()
{
    cout<<"\n\nName: "<<name<<endl<<"Age: "<<age<<endl<<"Height: "<<height<<endl;
}

int main()
{
    string name;
    cout<<"Enter name:";
    cin>>name;
    int height;
    cout<<"Enter height:";
    cin>>height;
    Constructor c(name);
    Constructor c2(height);
    Constructor c3;
    c.display();
}