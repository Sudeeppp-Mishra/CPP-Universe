/*
    Write a program in cpp to find the volume of cube, cylinder and sphere using function overloading.
*/

#include <iostream>
#define PI 3.14
using namespace std;

double volume(int l)
{
    return (l * l * l);
}

double volume(double r, double h)
{
    return (PI * r * r * h);
}

double volume(double r)
{
    return (4 / 3 * PI * r * r * r);
}

int main()
{
    int l;
    double r, h, rad;
    cout << "Enter length of cube:";
    cin >> l;
    cout << endl
         << "Enter radius and height of cylinder:";
    cin >> r >> h;
    cout << endl
         << "Enter the radius of cube:"
         << endl
         << endl;
    cin >> rad;

    cout << "Volume of cube: " << volume(l);
    cout << endl
         << endl
         << "Volume of cylinder: " << volume(r, h);
    cout << endl
         << endl
         << "Volume of sphere: " << volume(rad);

    return 0;
}