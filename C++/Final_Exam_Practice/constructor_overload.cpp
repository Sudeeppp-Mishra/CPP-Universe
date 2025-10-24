#include<iostream>
using namespace std;

class Overload
{
    float age;
    float roll;

    public:
    Overload(): age(0), roll(0)
    {
    }

    Overload(int age, float roll): age(age), roll(roll) {}

    Overload(float age, float roll): age(age), roll(roll) {}

    Overload(float age, int roll): age(age), roll(roll){}

    Overload(int age, int roll): age(age), roll(roll){}

    void display()
    {
        cout<<"\nAge: "<<age<<"\nRoll: "<<roll<<endl;
    }

};

int main()
{
    Overload o1;
    Overload o2(14, 4.2f);// Here we need to use 'f' for floating point coz in C++ 4.2 is considered double by default
    Overload o3(9.9f, 33);
    Overload o4(9.2f, 4);
    Overload o5(34,212);
    o1.display();
    o2.display();
    o3.display();
    o4.display();
    o5.display();
}