/*
    Design a class "Student" with private data members roll number, name and total marks. Use constructors to initialize data. Overload '>' operator to compare 
    two Student objects based in their total marks. Create an array of Students and find the student with highest marks. Kisplay the information of topper student.
*/

#include<iostream>
using namespace std;

class Student
{
    int roll, total;
    string name;
public:
    Student() : roll(0), total(0), name("") {}

    Student(int roll, int total, string name) : roll(roll), total(total), name(name) {}

    bool operator>(Student s)
    {
        return total > s.total;
    }

    void display()
    {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Total Marks: " << total << endl;
    }
};

int main()
{
    int roll, total;
    string name;
    int no_of_students;
    cout<<"Enter no. of students:"<<endl;
    cin>>no_of_students;
    Student s[no_of_students];

    for(int i = 0; i < no_of_students; i++)
    {
        cout << "Enter roll no, total marks and name: ";
        cin >> roll >> total;
        cin>>name;
        s[i] = Student(roll, total, name);
    }

    Student topper = s[0];
    for(int i = 1; i < no_of_students; i++)
    {
        if(s[i] > topper)
        {
            topper = s[i];
        }
    }

    cout << "Topper Student Information:" << endl;
    topper.display();

    return 0;
}