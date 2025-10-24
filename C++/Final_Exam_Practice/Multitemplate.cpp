#include<iostream>
using namespace std;

template <typename T1, typename T2>
class Sum
{
    T1 data1;
    T2 data2;
public:
    Sum(T1 data1, T2 data2): data1(data1), data2(data2) {}

    void sum()
    {
        cout<<"\nSum: "<<data1+data2;
    }
};

int main()
{
    Sum<int, float> obj1(5,6.4);
    obj1.sum();
    Sum<char, string> obj2('S',"udeep");
    obj2.sum();
}