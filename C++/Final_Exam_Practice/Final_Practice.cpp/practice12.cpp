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
    string qualification, depart;
    public:
    void getData()
    {
        cout<<"\nEnter name, age, address, qualification and depart: ";
        cin>>name>>age>>address>>qualification>>depart;
    }

    void showData()
    {
        cout<<"\nTeacher's Info\n";
        cout<<"\nName: "<<name<<"\nAge: "<<age<<"\nAddress: "<<address<<"\nQualification: "<<qualification<<"\nDepartment: "<<depart<<endl;
    }
};

class Student: public Person
{
    string program;
    int sem;
    public:
    
    void getData()
    {
        cout<<"\nEnter name, age, address, progra, semeset: ";
        cin>>name>>age>>address>>program>>sem;
    }

    void showData()
    {
        cout<<"\n\nStudent's Info\n";
        cout<<"\nName: "<<name<<"\nAge: "<<age<<"\nAddress: "<<address<<"\nProgram: "<<program<<"\nSemester: "<<sem;
    }
};

int main()
{
    Teacher t;
    t.getData();
    t.showData();

    Student s;
    s.getData();
    s.showData();

    return 0;
}