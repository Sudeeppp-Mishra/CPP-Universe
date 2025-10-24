#include<iostream>
using namespace std;

class Concatenate
{
    string s;
    public:
    Concatenate() {}

    Concatenate(string s): s(s) {}

    Concatenate operator +(Concatenate c)
    {
        Concatenate temp;
        temp.s=s+c.s;
        return temp;
    }

    void display()
    {
        cout<<s;
    }
};

int main()
{
    string s1,s2;
    cout<<"\nEnter two strings: ";
    cin>>s1>>s2;

    Concatenate c1(s1), c2(s2), c3;
    cout<<"\n1st String\n";
    c1.display();
    cout<<"\n2nd String\n";
    c2.display();
    c3=c1+c2;
    cout<<"\nAfter concatenation\n";
    c3.display();
}