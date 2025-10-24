#include<iostream>
using namespace std;

class Time
{
    int hr;
    int min;

public:
    Time(): hr(0), min(0) {}

    Time(int min)
    {
        if(min>=60)
        {
            this->hr=min/60;
            this->min=min%60;
        }
        else
        {
            this->hr=0;
            this->min=min;
        }
    }

    void display()
    {
        cout<<hr<<":"<<min<<endl;;
    }
};

int main()
{
    int mins;
    cout<<"enter minutes:"<<endl;
    cin>>mins;

    Time t=mins;
    t.display();
}