#include<iostream>
using namespace std;

class Unary
{
    int n;

public:
    Unary(): n(10) {}

    void display()
    {
        cout<<n<<endl;
    }
    friend void operator++(Unary&);
    friend void operator++(Unary&, int);
    friend void operator--(Unary&);
    friend void operator--(Unary&, int);
};

void operator++(Unary &u)
{
    u.n++;
}

void operator++(Unary &u, int)
{
    ++(u.n);
}

void operator--(Unary &u)
{
    u.n--;
}

void operator--(Unary &u, int)
{
    --(u.n);
}

int main()
{
    Unary u;
    u.display();
    u++;
    u.display();
    ++u;
    u.display();
    u--;
    u.display();
    --u;
    u.display();
    return 0;
}