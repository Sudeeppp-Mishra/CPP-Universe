#include<iostream>
using namespace std;

class Time
{
    int min;
    int hr;
public:
    Time(): hr(0), min(0) {}
    
    Time(int duration)
    {
        hr = duration/60;
        min = duration%60;
    }

    void display()
    {
        cout<<hr<<":"<<min<<endl;
    }
};

int main()
{
    int t;
    cout<<"Enter total time: ";
    cin>>t;
    Time t1;
    t1=t;
    t1.display();
    return 0;
}