#include<iostream>
using namespace std;

template <typename T>
class Sum
{
    T n1, n2;
public:
    Sum(T n1, T n2): n1(n1), n2(n2) {}

    T sum()
    {
        return n1+n2;
    }
};

int main()
{
    Sum <int> obj(4,2);
    cout<<"\n"<<obj.sum();

    Sum<char>obj1('S','M');
    cout<<"\n"<<obj1.sum();
}