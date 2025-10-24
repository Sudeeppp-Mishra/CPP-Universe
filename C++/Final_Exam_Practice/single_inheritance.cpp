#include<iostream>
using namespace std;

class Base
{
    protected:
    int data;
    public:
    void getData()
    {
        cout<<"\nEnter the data:";
        cin>>data;
    }
/*
//If data is private
    int returnData()
    {
        return data;
    }
    */
};

class Derived: public Base
{
    int data1;
    public:
    Derived()
    {
        data1=6;
    }

    void product()
    {
        cout<<data<<"X"<<data1<<"="<<data*data1;
    }
};

int main()
{
    Derived d;
    d.getData();
    d.product();
}