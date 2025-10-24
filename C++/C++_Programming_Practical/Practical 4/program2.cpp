/*
Using a class write a program that receives input principal amount, time and rate keeping rate 8% as default argument. Cacluate the simple interest
for three customers.
*/

#include<iostream>
using namespace std;

class A
{
    float principal, time, r, SI;
    public:
    void get_data() {
        cout<<"Enter principal and time:";
        cin>>principal>>time;
    }
    void simple_interest(float rate=8) {
        get_data();
        SI=(principal*time* rate )/100;
        cout<<"Simple Interest is "<<SI<<endl;
    }
};

int main()
{
    A customer1, customer2, customer3;
    customer1.simple_interest();
    customer2.simple_interest();
    customer3.simple_interest();
    return 0;
}