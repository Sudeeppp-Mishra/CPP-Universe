#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;

public:
    Student()
    {
        cout << "\nEnter roll no:\n";
        cin >> roll;
    }
};

class Faculty : public virtual Student
{
protected:
    string stream;

public:
    Faculty()
    {
        cout << "\nEnter stream:\n";
        cin >> stream;
    }
};

class Marks : virtual public Student
{
protected:
    int m1;

public:
    Marks()
    {
        cout << "\nEnter marks:\n";
        cin >> m1;
    }
};

class Information : public Marks, public Faculty
{
public:
    void display()
    {
        cout<<"\n\n----------|STUDENT INFORMATION|----------\n\n"<<endl;
        cout<<"\nRoll: "<<roll<<"\nStream: "<<stream<<"\nMarks: "<<m1<<endl;
    }
};

int main()
{
    Information i;
    i.display();
    return 0;
}