#include<iostream>
using namespace std;

namespace var1
{
    int a=1;
}

namespace var2
{
    int a=99;
}

namespace class1
{
    class A
    {
        public:
        void display()
        {
            cout<<"Class A of namespace class1:";
        }
    };
}

namespace class2
{
    class A
    {
        public:
        void display()
        {
            cout<<"Class A of namespace class2:";
        }
    };
}

int main()
{
    cout<<var1::a;
    cout<<endl<<var2::a;

    class1::A a;
    class2::A b;
    cout<<endl;
    a.display();
    cout<<endl;
    b.display();
}