#include<iostream>
using namespace std;

class Student
{
    protected:
    string name;
    int roll;

    public:
    void getInfo()
    {
        cout<<"Enter name and roll:"<<endl;
        cin>>name>>roll;
    }
};

class Marks:public Student
{
    protected:
    int t1,t2;

    public:
    void getMarks()
    {
        cout<<"\nEnter marks of term test 1st and 2nd:"<<endl;
        cin>>t1>>t2;
    }
//If private data
/*
    string returnName()
    {
        return name;
    }

    int returnRoll()
    {
        return roll;
    }
    */
};

class Final:public Marks
{
    int total;
    public:
    void display()
    {
        total=t1+t2;

        cout<<"\n\n|STUDENT INFORMATION|\n\n"<<"Name: "<<name<<endl<<"Roll No: "<<roll<<endl<<"Total Marks: "<<total;
    }
};

int main()
{
    Final f;
    f.getInfo();
    f.getMarks();
    f.display();
}