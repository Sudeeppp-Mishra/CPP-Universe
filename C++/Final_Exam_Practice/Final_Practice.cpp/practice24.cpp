/*
    Design a class "Student" with private data members roll number, name and total marks. Use constructors to initialize data. Overload '>' operator to compare 
    two Student objects based in their total marks. Create an array of Students and find the student with highest marks. Kisplay the information of topper student.
*/
#include<iostream>
#define SIZE 5
using namespace std;

class Student
{
    int roll, marks;
    string name;

    public:
    Student() {}

    Student(string name, int roll, int marks): name(name), roll(roll), marks(marks) {}

    bool operator >(Student s)
    {
        if(marks > s.marks)
            return 1;
        else
            return 0;
    }

    void display()
    {
        cout<<"\nName: "<<name<<"\nRoll No: "<<roll<<"\nMarks: "<<marks;
    }
};

int main()
{
    int i;
    Student s[SIZE];
    string name;
    int marks, roll;

    for(i=0;i<SIZE;i++)
    {
        cout<<"\nEnter name:";
        cin>>name;
        cout<<"\nEnter roll no: ";
        cin>>roll;
        cout<<"\nEnter marks: ";
        cin>>marks;

        s[i]=Student(name, roll, marks);
    }

    Student topper=s[0];
    for(i=0;i<SIZE;i++)
    {
        if(s[i] > topper)
            topper=s[i];
    }

    cout<<"\nTopper's INFO:\n";
    topper.display();
}