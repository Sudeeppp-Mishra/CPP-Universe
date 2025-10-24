#include<iostream>
using namespace std;

class Overload_Unary
{
    int data;
public:
    Overload_Unary() {}

    Overload_Unary(int data): data(data) {}

    friend Overload_Unary operator++(Overload_Unary);
    friend Overload_Unary operator++(Overload_Unary,int);
     
    friend Overload_Unary operator--(Overload_Unary);
    friend Overload_Unary operator--(Overload_Unary,int);

    friend Overload_Unary operator-(Overload_Unary);

    void display()
    {
        cout<<"\n\n"<<data<<endl;
    }
};

Overload_Unary operator++(Overload_Unary o)
{
    ++(o.data);
    return o;
}

Overload_Unary operator++(Overload_Unary o, int)
{
    (o.data)++;
    return o;
}

Overload_Unary operator--(Overload_Unary o)
{
    --(o.data);
    return o;
}

Overload_Unary operator--(Overload_Unary o, int)
{
    (o.data)--;
    return o;
}

Overload_Unary operator-(Overload_Unary o)
{
    o.data=-(o.data);
    return o;
}

int main()
{
    Overload_Unary o1(10), o2, o3, o4, o5, o6;
    o1.display();
    o2=++o1;
    o2.display();
    o3=o2++;
    o3.display();
    o4=--o1;
    o4.display();
    o5=o1--;
    o5.display();
    o6=-o1;
    o6.display();
    return 0;

}