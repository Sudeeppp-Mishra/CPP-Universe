#include<iostream>
using namespace std;

class COPY_CONSTRUCT
{
    double num;
public:
    COPY_CONSTRUCT(): num(0) {}

    COPY_CONSTRUCT(int n): num(n) {}

    COPY_CONSTRUCT(COPY_CONSTRUCT &A)
    {
        num = A.num;
    }

    void display();
};

void COPY_CONSTRUCT::display()
{
    cout<<"\n"<<num;
}

int main()
{
    COPY_CONSTRUCT c1, c2(15), c3;
    c1.display();
    c2.display();
    c3.display();
    COPY_CONSTRUCT c4(c2);
    c4.display();
}