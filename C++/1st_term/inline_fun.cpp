// Inline function is a request to the compiler not a command. So, the compiler will decide if a function will be inline or not.
#include<iostream>
#define PI 3.14
using namespace std;

inline float area(int r)
{
    return PI*r*r;
};

int main()
{
    int rad;
    cout<<"Enter radius:";
    cin>>rad;
    cout<<"Area of circle having radius "<<rad<<" is "<<area(rad);
    return 0;
}