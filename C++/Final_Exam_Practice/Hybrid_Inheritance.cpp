#include<iostream>
using namespace std;

class Student
{
    protected:
    string name;

public:
    Student()
    {
        cout<<"\nEnter name: "<<endl;
        cin>>name;
    }

    void displayName()
    {
        cout<<"\nName: "<<name;
    }
};

class Marks: public Student
{
    protected:
    int m1,m2;
    public:
    Marks()
    {
        cout<<"\nEnter marks in two subjects: "<<endl;
        cin>>m1>>m2;
    }

    void displayMarks()
    {
        cout<<"\nMarks:\nm1: "<<m1<<"\nm2: "<<m2<<endl;
    }
};

class Sports
{
    protected:
    int score;

    public:
    Sports()
    {
        cout<<"\nEnter score: "<<endl;
        cin>>score;
    }

    void displayScore()
    {
        cout<<"\nScore: "<<score<<endl;
    }
};

class Result: public Marks, public Sports
{
    int total;
    public:
    void displayResult()
    {
        cout<<"\nTotal final result: "<<m1+m2+score<<endl;
    }
};

int main()
{
    Result r;

    r.displayName();
    r.displayMarks();
    r.displayScore();
    r.displayResult();
}