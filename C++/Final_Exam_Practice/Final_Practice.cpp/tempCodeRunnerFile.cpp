#include<iostream>
using namespace std;

class Array
{
    string name;
    int age;
public:
    Array(string name, int age): name(name), age(age){}

    void display()
    {
        cout<<"\n\nName: "<<name<<"\tAge: "<<age<<endl;
    }
};

int main()
{
    string name;
    int age;
    const int SIZE=4;
    cout<<"\nEnter name and age:\n";
    
    Array a[SIZE];
    for(int i=0;i<SIZE;i++)
    {
        a[i]=Array(name, age);
    }
}