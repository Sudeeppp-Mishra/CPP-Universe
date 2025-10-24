#include<iostream>
using namespace std;

class Time
{
    int hrs;
    int min;

public:
    Time(): hrs(0), min(0) {}

    Time(int hr, int min): hrs(hr), min(min) {}

    operator int()
    {
        return (hrs*60*60)+(min*60);
    }

    void display()
    {
        cout<<hrs<<":"<<min<<endl;
    }
};

int main()
{
    Time t(24,0);
    int duration = t;
    t.display();
    cout<<duration;
}