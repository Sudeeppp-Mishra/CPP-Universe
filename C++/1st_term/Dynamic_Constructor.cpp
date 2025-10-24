// Dynamic constructor is the constructor that uses new operator to allocate memory dynamically
#include<iostream>
using namespace std;

class person
{
    int *age;
    
public:
    person(int *p_age)
    {
        age=new int;
        age=p_age;
    }
    void display()
    {
        cout<<"Your age is "<<*age;
    }
};

int main()
{
    int age;
    cout<<"Enter age:";
    cin>>age;
    person d(&age);
    d.display();
    return 0;
}