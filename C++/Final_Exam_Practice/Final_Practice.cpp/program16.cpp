/*
Write a class time with three integer attribute hour, minute and second. Include following respponsibilities in class
i) Default and Parameterized Constructors
ii) Display method to display hour, minute, and second in time format
iii) Appropriate operator to overload to realize addition of two time objects
*/
#include<iostream>
using namespace std;

class Time
{
    int hr, min, sec;
    public:
    Time(): hr(0), min(0), sec(0) {}

    Time(int hr, int min, int sec): hr(hr), min(min), sec(sec) {}

    void time_conversion()
    {
        if(sec>=60)
        {
            min=min+sec/60;
            sec=sec%60;
        }
        if(min>=60)
        {
            hr=hr+min/60;
            min=min%60;
        }
        if(hr>=24)
        {
            hr=hr%24;
        }
    }

    Time operator+(Time t)
    {
        Time temp;
        temp.hr=hr+t.hr;
        temp.min=min+t.min;
        temp.sec=sec+t.sec;
        temp.time_conversion();
        return temp;
    }

    void display()
    {
        cout<<"Time: "<<hr<<":"<<min<<":"<<sec<<endl;
    }
};

int main()
{
    Time t1(12,55,20),t2(10,55,20), t3;
    t1.display();
    t2.display();
    t3=t1+t2;
    t3.display();
}