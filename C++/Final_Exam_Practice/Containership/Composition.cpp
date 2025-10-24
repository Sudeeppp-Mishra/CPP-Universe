#include<iostream>
using namespace std;

class Engine
{
    public:
    void start()
    {
        cout<<"\nEngine started!";
    }
};

class Car
{
    Engine engine;
    public:
    void drive()
    {
        engine.start();
        cout<<"\nCar is driving!";
    }
};

int main()
{
    Car c;
    c.drive();
    return 0;
}