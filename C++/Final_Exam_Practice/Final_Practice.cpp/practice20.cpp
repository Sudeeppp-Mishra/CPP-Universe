#include<iostream>
using namespace std;

template <typename T1=int, typename T2=int>
class Template
{
    T1 a;
    T2 b;
    public:
    Template(T1 a, T2 b): a(a), b(b) {}

    void display()
    {
        cout<<"\n\n"<<a<<"\n"<<b<<endl<<endl;
    }
};

int main()
{
    Template<char, int> obj1('H', 10);
    Template<>obj2('A','a');
    obj2.display();
    obj1.display();
}


