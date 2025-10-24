#include<iostream>
#include<cmath>
using namespace std;

template <typename T>
class Square
{
    T num;
    public:
    Square(T n): num(n) {}

    void square()
    {
        cout<<num<<"^2="<<pow(num,2)<<endl;
    }
};

int main()
{
    Square<int> obj1(5);
    Square<float> obj2(2.2f);
    Square<char> obj3('S');

    obj1.square();
    obj2.square();
    obj3.square();
}