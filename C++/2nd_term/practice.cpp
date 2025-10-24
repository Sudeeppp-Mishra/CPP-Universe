/*
    Design a class "Student" with private data members
     roll number, name and total marks. Use constructors
      to initialize data. Overload '>' operator to 
      compare 
    two Student objects based in their total marks. 
    Create an array of Students and find the student 
    with highest marks. Kisplay the information of 
    topper student.
*/

#include<iostream>
using namespace std;

class Student
{
    string name;
    int total_marks;

public:
    Student() {}

    Student(string name, int marks): name(name), total_marks(marks) {}

    bool operator>(Student s)
    {
        if(total_marks>s.total_marks)
            return true;
        else
            return false;
    }

    void display()
    {
        cout<<"Name: "<<name<<"\nMarks: "<<total_marks<<endl;
    }
};

int main()
{
    int n, i, marks;
    cout<<"Enter no of students:";
    cin>>n;
    string name;
    Student s[n], topper;

    for(i=0;i<n;i++)
    {
        cout<<"Enter name and marks:";
        cin>>name>>marks;
        cout<<endl;
        s[i]=Student(name, marks);
    }

    topper=s[0];
    for(i=0;i<n;i++)
    {
        if(s[i]>topper)
            topper=s[i];
    }

    cout<<endl<<endl<<"Topper Info:"<<endl<<endl;
    topper.display();
    return 0;
}