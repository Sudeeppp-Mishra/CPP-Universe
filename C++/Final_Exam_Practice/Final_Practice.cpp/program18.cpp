#include<iostream>
using namespace std;

class Calculation
{
    double n;
    public:
    Calculation():n(0){}

    Calculation(int n): n(n) {}

    Calculation operator+(Calculation c)
    {
        Calculation temp;
        temp.n=n+c.n;
        return temp;
    }

    Calculation operator-(Calculation c)
    {
        Calculation temp;
        temp.n=n-c.n;
        return temp;
    }

    Calculation operator/(Calculation c)
    {
        Calculation temp;
        try
        {
            if(c.n!=0)
                temp.n=n/c.n;
            else
                throw c.n;
        }
        catch(...)
        {
            cerr<<"Exception Occured: divident is "<<c.n;
        }
        return temp;
    }

    Calculation operator*(Calculation c)
    {
        Calculation temp;
        temp.n=n*c.n;
        return temp;
    }

    void display()
    {
        cout<<n;
    }
};

int main()
{
    char ch;
    int n1,n2;
    cout<<"\nEnter operator: ";
    cin>>ch;
    cout<<"Enter two operands: ";
    cin>>n1>>n2;

    Calculation c1(n1), c2(n2);
    switch (ch)
    {
    case '+':
        cout<<n1<<"+"<<n2<<"=";
        (c1+c2).display();
        break;

    case '-':
        cout<<n1<<"-"<<n2<<"=";
        (c1-c2).display();
        break;

    case '/':
        cout<<n1<<"/"<<n2<<"=";
        (c1/c2).display();
        break;

    case '*':
        cout<<n1<<"x"<<n2<<"=";
        (c1*c2).display();
        break;
    
    default:
        break;
    }
}