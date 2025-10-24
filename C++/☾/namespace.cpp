#include<iostream>
using namespace std;

namespace first{ //Using namespaces we can redeclare variables or anything else like classes as well having same names
    int x=0;
}

namespace second{
    int x=1;
}

namespace class1{
    class A{
        public:
        A()
        {
            cout<<"Hello";
        }
    };
}

namespace class2{
    class A{
        public:
        A()
        {
            cout<<"World";
        }
    };
}
int main(){
    int x=5;
    cout<<first::x<<endl;
    cout<<second::x<<endl;
    cout<<x;

    class1::A a;
    class2::A b;
}