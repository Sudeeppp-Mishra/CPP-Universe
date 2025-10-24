/*
Define a class point that stores the x and y co-ordinates of a point. The class uses parameterized constructor for initializing the class objects. Display the point 
in the form as (POINT P1=(x,y))
*/

#include<iostream>
using namespace std;

class point
{
    int x,y;
    public:
    point(int n1, int n2)
    {
        x=n1;
        y=n2;
        cout<<endl
            <<endl;
        cout<<"Entered point in cartesian form is: ("<<x<<","<<y<<")"<<endl;
    }
};

int main()
{
    int a,b;
    cout<<"\nEnter the point as x-cordinate and y-coordinate in xy-plane:";
    cin>>a>>b;
    point s(a,b);
}