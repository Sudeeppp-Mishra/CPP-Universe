/*
WAP to create a class person with data members name, age and address. Create another class teacher with data members qualification and department. Also create another
class student with data program and semester. Both classes are inherited from class person. Create member function showdata to display the information required.
*/
#include<iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;
    string address;

};

class Teacher: public Person
{
    string qualification;
    string department;
public:
    void getData()
    {
        cout<<"Enter teacher's name, age and address respectively:";
        cin>>name>>age>>address;
        cout<<endl;
        cout<<"Enter qualification and department:";
        cin>>qualification>>department;
    }
    void showData()
    {
        cout<<"Name: "<<name<<"\n"<<"Age: "<<age<<"\n"<<"Address: "<<address<<"\n"<<"Qualification: "<<qualification<<"\n"<<"Department: "<<department; 
    }
};

class Student: public Person
{
    string program;
    int semester;  
public:
    void getData()
    {
        cout<<"\nEnter student's name, age, program and semester:";
        cin>>name>>age>>program>>semester;
    }

    void showData()
    {
        cout<<"\n\nName: "<<name<<"\n"<<"Age: "<<age<<"\n"<<"\n"<<"Program: "<<program<<"\n"<<"Semester: "<<semester;

    }
};

int main()
{
    Teacher t;
    t.getData();

    Student s;

    s.getData();
    s.showData();

    t.showData();
    return 0;
}