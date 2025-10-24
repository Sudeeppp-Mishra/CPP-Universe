/*
                                                        Diamond Problem

                                                          Student Class
                                                              [roll]
                                                                /\
                                                              /    \
                                                            /        \
                                                          /            \
                                                   Faculty Class      Marks Class
                                                     [Stream]             [m1]
                                                        \                   /
                                                          \                /
                                                            \             /
                                                              \          /  
                                                                \      /
                                                                  \  /
                                                            Information Class
                                                                [display]
*/
#include<iostream>
using namespace std;

class Student
{
protected:
    int roll;
};

class Faculty: public virtual Student
{
protected:
    string stream;
};

class Marks: public  virtual Student
{
protected:
    int m1;
};

class Information: public Faculty, public Marks
{
public:
    void get_info()
    {
        cout<<"Enter roll no, stream, and marks:";
        cin>>roll>>stream>>m1;
    }
    void display()
    {
        cout<<"Roll: "<<roll<<"\nStream: "<<stream<<"\nMarks: "<<m1;
    }
};

int main()
{
    Information i;
    i.get_info();
    i.display();
    return 0;
}