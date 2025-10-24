/*
    Create an abstract class shape with two member
    function getData() for initialization and area()
    for finding area of different shapes. Dervie two
    specific classes Triangel and rectangel which
    override the both function.
    Use those classes in main function and display the
    area of triangle and rectangle.
*/

#include <iostream>
#include <cmath>
using namespace std;

class Shape
{

public:
    virtual void getData() = 0;
    virtual void area() = 0;

    virtual ~Shape() 
    {
        cout<<"Base destroyed!";
    }
};

class Triangle : public Shape
{
    double s, a, b, c;

public:
    void getData() override
    {
        cout << "Enter the sides of the triangle:";
        cin >> a >> b >> c;
        s = (a + b + c) / 2;
    }

    void area() override
    {
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "Area of triangle:" << area << endl;
    }
};

class Rectangle : public Shape
{
    double l, b;

public:
    void getData() override
    {
        cout << "Enter lenght and breadth:";
        cin >> l >> b;
    }

    void area() override
    {
        double area = l * b;
        cout << "Area of rectangle:" << area << endl;
    }
};

class Test : public Shape
{
public:
    void getData() override
    {

    }

    void area() override
    {
        cout << "HI";
    }
};

int main()
{
    Shape *s;
    Triangle t;
    Rectangle r;
    s = &t;
    s->getData();
    s->area();

    s = &r;
    s->getData();
    s->area();

    s = new Test;
    s->area();
    delete s;
    return 0;
}