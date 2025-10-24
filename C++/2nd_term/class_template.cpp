#include<iostream>
using namespace std;

template <typename T1, typename T2>
class Sum
{
    T1 x;
    T2 y;

public:
    Sum(): x(0), y(0) {}

    Sum(T1 x, T2 y): x(x), y(y) {}

    void sum()
    {
        cout<<"Sum: "<<x+y<<endl;
    }
};

int main()
{
    int a;
    float b;
    cout<<"Enter integer and float:";
    cin>>a>>b;

    char ch;
    string s;
    cout<<"Enter a character and then string:";
    cin>>ch>>s;

    Sum <int, float> obj1(a,b);
    obj1.sum();

    Sum <char, string> obj2(ch, s);
    obj2.sum();
    return 0;
}