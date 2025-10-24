#include<iostream>
using namespace std;

class Student
{
    string namep;

    public:
    Student(string name): namep(name) {}
    void display()
    {
        cout<<"\nName: "<<namep;
    }
};

int main()
{
    Student *ptr;
    try
    {
        ptr = new Student("Sudeep");
    }
    catch(bad_alloc)
    {
        std::cerr << "Memory allocation failed!!" << '\n';
    }
    ptr->display();
    
}