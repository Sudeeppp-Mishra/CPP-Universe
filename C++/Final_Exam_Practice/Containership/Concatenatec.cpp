#include<iostream>
using namespace std;

class string1
{
    string s1;
    public:
    string firstString()
    {
        cout<<"\nEnter first string: "<<endl;
        cin>>s1;
        return s1;
    }
};

class string2
{
    string s2;
    public:
    string secondString()
    {
        cout<<"\nEnter second string: "<<endl;
        cin>>s2;
        return s2;
    }
};

class concatenate
{
    string1 s1;
    string2 s2;

    public:
    void concatenateString()
    {
        cout<<"\n\n"<<endl<<s1.firstString()+s2.secondString();
    }
};

int main()
{
    concatenate c;
    c.concatenateString();
    return 0;
}