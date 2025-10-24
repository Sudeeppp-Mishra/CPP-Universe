#include<iostream>
using namespace std;

template <typename T1=int, typename T2=int>
class Sum
{
    T1 a;
    T2 b;

public:
    Sum(T1 n1, T2 n2): a(n1), b(n2) {}

    void sum()
    {
        cout<<a<<"\n"<<b<<endl;
    }    
};

int main()
{
    Sum<int, char> obj1(4,'A');
    obj1.sum();
    Sum<float, double> obj2(4.3, 4.8);
    obj2.sum();

    Sum<> obj3('A', 'a');
    obj3.sum();
}