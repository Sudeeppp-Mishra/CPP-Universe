/*
    Create an abstract class shape with two member function getData() for initialization and area() for finding area of different shapes. Dervie two specific classes Triangel and rectangel which override the both function.
    Use those classes in main function and display the area of triangle and rectangle.
*/

#include <iostream>
#include <cmath>
using namespace std;

class Abstract
{
public:
    virtual void getData() = 0;

    virtual double area() = 0;
};

class Triangle : public Abstract
{
    double a, b, c, s;

public:
    void getData() override
    {
        cout << "Enter the there sides of the triangle: " << endl;
        cin >> a >> b >> c;
        s = (a + b + c) / 2;
    }

    double area() override
    {
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
};

class Rectangle : public Abstract
{
    double l, b;

public:
    void getData() override
    {
        cout << "Enter length and breadth: " << endl;
        cin >> l >> b;
    }

    double area() override
    {
        return (l * b);
    }
};

int main()
{
    Abstract *shape;

    Triangle t;
    shape = &t;
    shape->getData();
    cout<<"Area of Triangle:"<<shape->area()<<endl
                                            <<endl;

    Rectangle r;
    shape = &r;
    shape->getData();
    cout<<"Area of Rectangle:"<<shape->area()<<endl
                                             <<endl;
    return 0;
}