#include<iostream>
using namespace std;

struct student
{
    int n;
    void display()
    {
        cout<<"Enter n:";
        cin>>n;
        cout<<endl<<n;
    }
};
int main()
{
    struct student s;
    s.display();
}