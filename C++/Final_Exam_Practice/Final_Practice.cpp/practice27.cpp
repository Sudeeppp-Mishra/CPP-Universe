#include<iostream>
using namespace std;

class Conversion
{
    int hr, min, sec;
    public:
    Conversion() : sec(0) {}

    Conversion(int hr, int min): hr(hr), min(min) {}

    operator int()
    {
        return (hr*60*60+min*60);
    }

    void display()
    {
        cout<<hr<<"hr "<<min<<"min.";
    }
};

int main()
{
    Conversion c(1,40);
    int seconds;
    seconds=c;
    c.display();
    cout<<seconds;
}