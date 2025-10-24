#include<iostream>
using namespace std;

class practice2
{
private:
    string name;
    int id;
public:
    practice2()
    {
        cout<<"\nEnter name and id: ";
        cin>>name>>id;
    }

    void display()
    {
        cout<<"\nName: "<<name<<"\t"<<"id: "<<id<<endl;
    }
};

int main()
{
    practice2 p[3];
    for(int i=0;i<3;i++)
        p[i].display();
}

