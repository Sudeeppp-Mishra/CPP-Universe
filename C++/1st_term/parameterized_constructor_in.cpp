#include <iostream>
using namespace std;

class Base
{
protected:
    string name;
    int age;

public:
    Base(string name_, int age_) : name(name_), age(age_) {}
};

class Child : public Base
{
    string faculty;
    int semester;
    int roll;

public:
    Child(string faculty_, int semester_, int roll_, string name_, int age_): Base(name_, age_), faculty(faculty_), semester(semester_), roll(roll_) {}

    void display()
    {
        cout<<"Name: "<<name<<"\nAge: "<<age<<"\nFaculty: "<<faculty<<"\nSemester: "<<semester<<"\nRoll No: "<<roll;
    }
};

int main()
{
    string name, faculty;
    int age, semester, roll;
    cout<<"Enter your name, age, faculty, semester and roll no:";
    cin>>name>>age>>faculty>>semester>>roll;
    Child c(faculty, semester, roll, name, age);
    c.display();
    return 0;
}