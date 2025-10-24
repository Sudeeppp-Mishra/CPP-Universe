/*
#include<iostream>
using namespace std;

class University
{
    public:
    string name_university;
};

class Affiliated_college: public virtual University
{
    public:
    string name_affiliated;
    int no_of_programs;
};

class Constituent_college: public virtual University
{
    public:
    string name_constituent, location;
};

class Student: public Affiliated_college, public Constituent_college
{
    public:
    string name_student,program;
};

int main()
{
    Student s;
    cout<<"Enter university name, affiliated college, no of programs, name of constituent college, location, name of student and program:";
    cin>>s.name_university>>s.name_affiliated>>s.no_of_programs>>s.name_constituent>>s.location>>s.name_student>>s.program;
    cout<<"\n\n.....Details.....\n\n";
    cout<<"University Name: "<<s.name_university<<endl<<"Affiliated College: "<<s.name_affiliated<<endl<<"No of programs: "<<s.no_of_programs<<endl
        <<"Constituent College: "<<s.name_constituent<<endl<<"Location: "<<s.location<<endl<<"Student Name: "<<s.name_student<<endl<<"Program: "<<s.program;
        return 0;
}
*/

#include<iostream>
using namespace std;

class Person
{
    string name, address;
    int age, citizenship_no;
public:
    Person(string name_, int age_, string address_, int citizenship):name(name_), age(age_), address(address_), citizenship_no(citizenship){}

    void display()
    {
        cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Address: "<<address<<endl<<"Citizenship: "<<citizenship_no;
    }
};

int main()
{
    string name, address;
    int age, citizenship;
    cout<<"Enter name, address and age:";
    cin>>name>>address>>age;
    if(age>16)
    {
        cout<<"Enter citizenship no:";
        cin>>citizenship;
    }
    else
    {
        citizenship=0;
    }
    Person p(name, age, address, citizenship);
    p.display();
    return 0;
}