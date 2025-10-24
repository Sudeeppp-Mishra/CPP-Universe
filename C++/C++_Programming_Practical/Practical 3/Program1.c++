/*
Inline Function
1. Assume that a customer will get 10% discount for  a shirt.  Use inline function to display the net payment to the shopkeeper by the customer.
*/
#include<iostream>
using namespace std;

inline float function(float payment)
{
    return (payment-(payment*10/100));
};

int main()
{
    float pay;
    cout<<"Enter the price:";
    cin>>pay;
    cout<<"Your payment after 10 percent discount is "<<function(pay);
}