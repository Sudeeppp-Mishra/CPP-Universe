#include<iostream>
using namespace std;

class Overload
{
    int n;
    bool b;

public:
    Overload(): n(10), b(true) {}

    void operator!()
    {
        n=!n;
        b=!b; 
    }

    void operator-()
    {
        n=-n;
    }

    void display()
    {
    cout<<n<<endl<<b<<endl;
    }
};

int main()
{
    Overload o;
    !o;
    o.display();

    Overload o1;
    -o1;
    o1.display();
    return 0;
}