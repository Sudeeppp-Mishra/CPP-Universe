/*
WAP to input an integer value from the user.
 If the value is <0, then raise invalid_argument
exception saying "Negative value not allowed". If
 value is equal to 0, raise domain_error saying 
 "Value cannot be zero" and
for value >100, raise out_of_range exception saying 
"Value out of range".
*/
#include<iostream>
#include<stdexcept>
using namespace std;

void sample(int n)
{
    if(n<0)
        throw invalid_argument("-ve value not allowed");
    else if(n==0)
        throw domain_error("Value is 0");
    else if(n>100)
        throw out_of_range("Value out of range!");
    else
        throw 'R';
}

int main()
{
    int n;
    cout<<"Enter a no:";
    cin>>n;
    try
    {
        sample(n);
    }
    catch(invalid_argument e)
    {
        cerr<<"Error: "<<e.what();
    }
    catch(domain_error e)
    {
        cerr<<"Error: "<<e.what();
    }
    catch(out_of_range o)
    {
        cerr<<"Error: "<<o.what();
    }
    catch(char s)
    {
        cout<<"Value is allowed!";
    }
}