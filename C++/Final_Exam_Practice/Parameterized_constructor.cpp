#include<iostream>
using namespace std;

class Constructor1
{
    int age;
    
    public:
    Constructor1(int age): age(age) {} // OR Constructor1(int age){ this->age=age }

    void printAge()
    {
        cout<<"\nAge: "<<age<<endl;
    }
};

class Constructor2
{
    string name;
    public:
    Constructor2(string naam): name(naam) {}

    void printName()
    {
        cout<<"\n"<<name<<endl;
    }
};

class Constructor3
{
    string College;
    public:
    Constructor3() {}
    Constructor3(string col): College(col) {}

    void printCollege()
    {
        cout<<"\n\n"<<College;
    }
};

int main()
{
    Constructor1 c1(10);
    c1.printAge();
    Constructor2 c2[3]={Constructor2("Hi"), Constructor2("Hello"), Constructor2("Sudeep")};
    for(int i=0;i<3;i++)
        c2[i].printName();
    Constructor3 c3[4];
    string col;
    for(int i=0;i<4;i++)
    {
        cout<<"\nEnter college: ";
        cin>>col;
        c3[i]=Constructor3(col);
    }
    for(int i=0;i<4;i++)
        c3[i].printCollege();
}