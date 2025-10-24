#include<iostream>
using namespace std;

class Weight
{
    int kg;

public:
    Weight()
    {
        kg=0;
    }

    Weight(int x)
    {
        kg=x;
    }

    void printWeight()
    {
        cout<<"Weight in KG: "<<kg<<endl;
    }

    void operator++()//In C++ this is set default for pre-increment
    {
        kg++;
    }

    void operator++(int)//So we need to use int as parameter to diffrentiate between pre and post increment
    {
        kg++;
    }

    void operator--()
    {
        kg--;
    }

    void operator--(int)
    {
        kg--;
    }
};

int main()
{
    Weight obj;
    obj.printWeight();
    ++obj;
    obj.printWeight();
    obj++;
    obj.printWeight();
    obj--;
    obj.printWeight();
    --obj;
    obj.printWeight();
    return 0;
}