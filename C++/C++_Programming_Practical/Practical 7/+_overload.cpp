/* Overload '+' operator to concatenate two strings */

#include<iostream>
using namespace std;

class concatenate
{
    string s, result;

public:
    void getString()
    {
        cout<<"Enter the string:";
        cin>>s;
    }

    concatenate operator+(concatenate c)
    {
        concatenate temp;
        temp.result = s + c.s;
        return temp;
    }

    void display()
    {
        cout<<"Concatenated string: "<<result;
    }
};

int main()
{
    concatenate c1, c2, c;
    c1.getString(); 
    c2.getString();
    c=c1+c2;
    c.display();
    return 0;
}