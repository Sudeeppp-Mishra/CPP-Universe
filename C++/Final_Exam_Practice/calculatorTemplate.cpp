#include<iostream>
using std::cin;
using std::cout;
using std::endl;

template <typename T>
class Calculator
{
    T n1, n2;
public:
    Calculator(T data1, T data2): n1(data1), n2(data2) {}

    T addition()
    {
        return n1+n2;
    }

    T subtract()
    {
        return n1-n2;
    }

    T multi()
    {
        return n1*n2;
    }

    T div()
    {
        return n1/n2;
    }
};

int main()
{
    Calculator<int> obj1(10,8);
    cout<<"\nSum: "<<obj1.addition();
    cout<<"\nSubtraction: "<<obj1.subtract();
    cout<<"\nMultiplication: "<<obj1.multi();
    cout<<"\nDivision: "<<obj1.div();

    Calculator<float> obj2(10.4, 1.1);
    cout<<"\nSum: "<<obj2.addition();
    cout<<"\nSubtraction: "<<obj2.subtract();
    cout<<"\nMultiplication: "<<obj2.multi();
    cout<<"\nDivision: "<<obj2.div();

}