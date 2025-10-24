#include<iostream>
using namespace std;

class Engine
{
    public:
    void start()
    {
        cout<<"\nEngine Started!";
    }
};

class Car
{
    public:
    Engine e;
    void move()
    {
        e.start();
        cout<<"\nCar is driving!";
    }
};

int main()
{
    Car c;
    c.move();
}