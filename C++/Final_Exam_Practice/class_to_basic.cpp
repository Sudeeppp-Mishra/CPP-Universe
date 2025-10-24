#include<iostream>
using namespace std;

class Conversion
{
    int hrs, mins;
public:
    Conversion(int hrs, int mins): hrs(hrs), mins(mins) {}

    operator int()
    {
        return (hrs*60*60+mins*60);
    }

    void display()
    {
        cout<<hrs<<" hrs "<<mins<<" mins = ";
    }
};

int main()
{
    int hrs, mins;
    cout<<"Enter hrs and mins: ";
    cin>>hrs>>mins;
    Conversion c(hrs, mins);
    int seconds=c;
    c.display();
    cout<<seconds;
}