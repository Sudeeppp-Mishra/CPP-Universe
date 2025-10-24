#include<iostream>
using namespace std;

class DMA
{
    int *p;

public:
    void get_info()
    {
        p=new int;
        cout<<"Enter a number:";
        cin>>*p;
        cout<<endl<<endl;
        cout<<*p;
        delete p;
    }
};

int main()
{
    DMA a;
    a.get_info();
    return 0;
}