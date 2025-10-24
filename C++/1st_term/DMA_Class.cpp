#include<iostream>
using namespace std;

class DMA_CLASS
{
    int no;

public:
    DMA_CLASS()
    {
        cout<<"Enter a no:";
        cin>>no;
    }
    void hello()
    {
        cout<<"HELLO";
    }
};

int main()
{
    DMA_CLASS *d=new DMA_CLASS;
    d->hello();
    return 0;
}