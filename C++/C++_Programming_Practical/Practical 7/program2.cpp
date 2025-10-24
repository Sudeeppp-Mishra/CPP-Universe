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
        temp.sec = sec + t.sec;
        temp.min = min + t.min + temp.sec / 60;
        temp.sec %= 60;
        temp.hr = hr + t.hr + temp.min / 60;
        temp.min %= 60;
        temp.hr%=24;
        return temp;
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