#include<iostream>
using namespace std;

class Binary
{
    double n, result, n2;

public:
    Binary(): n(0), n2(0), result(0) {}

    Binary(double n)
    {
        this->n = n;
    }

    Binary operator+(Binary b)
    {
        Binary temp;
        temp.result = this->n + b.n;
        temp.n2 = b.n;
        return temp;
    }

    Binary operator-(Binary b)
    {
        Binary temp;
        temp.result = n - b.n;//this pointer can be used or we can even not use it
        temp.n2 = b.n;
        return temp;
    }

    Binary operator*(Binary b)
    {
        Binary temp;
        temp.result = n * b.n;
        temp.n2 = b.n;
        return temp;
    }

    Binary operator/(Binary b)
    {
        Binary temp;
        temp.result = n / b.n;
        temp.n2 = b.n;
        return temp;
    }

    void display(char ch)
    {
        cout<<"Result="<<result<<endl;
    }
};

int main()
{
    double n1, n2;
    char choice;
    cout<<"Enter the operator (+, -, *, /):";
    cin>>choice;
    cout<<"Enter two numbers:";
    cin>>n1>>n2;

    Binary obj1(n1), obj2(n2), o;
    switch (choice)
    {
    case '+':
        o=obj1+obj2;
        o.display(choice);
        break;
    
    case '-':
        o=obj1-obj2;
        o.display(choice);
        break;

    case '*':
        o=obj1*obj2;
        o.display(choice);
        break;

    case '/':
        o=obj1/obj2;
        o.display(choice);
        break;

    default:
        cout<<"Inavalid Choice!";
        break;
    }
}