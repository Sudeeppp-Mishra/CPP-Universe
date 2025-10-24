/*
Write a class time with three integer attribute hour, minute and second. Include following respponsibilities in class
i) Default and Parameterized Constructors
ii) Display method to display hour, minute, and second in time format
iii) Appropriate operator to overload to realize addition of two time objects
*/

#include <iostream>
using namespace std;

class Time
{
    int hr, min, sec;
    static int count;

public:
    Time() {}

    Time(int hr, int min, int sec) : hr(hr), min(min), sec(sec) {}

    void displayTime()
    {
        count++;
        cout << "Time for object " << count << " is\n\n"
             << hr << ":" << min << ":" << sec << endl
             << endl;
    }

    Time operator+(Time t)
    {
        Time temp;
        // Or use any function
        temp.hr = hr + t.hr;
        temp.min = min + t.min;
        temp.sec = sec + t.sec;
        temp.convert();
        return temp;
    }

    void convert()
    {
        if(sec>=60)
        {
            min+=sec/60;
            sec=sec%60;
        }

        if(min>=60)
        {
            hr+=min/60;
            min= min%60;
        }

        if(hr>=24)
        {
            hr=hr%24;
        }
    }
};

int Time::count;
int main()
{
    int hr, min, sec;
    cout << "Enter time in hour, minute and second respectiverly for 1st object:" << endl;
    cin >> hr >> min >> sec;

    Time t1(hr, min, sec);
    t1.displayTime();

    cout << "Enter time in hour, minute and second respectively for 2nd object:" << endl;
    cin >> hr >> min >> sec;

    Time t2(hr, min, sec), t;
    t2.displayTime();

    t = t1 + t2;
    t.displayTime();
}