#include<iostream>
using namespace std;

class DMA
{
    int *no;

public:
    DMA()
    {
        no=new int[5];
        int i;
        for(i=0;i<5;i++)
        {
            cout<<"Enter no:";
            cin>>no[i];
        }
        for(i=0;i<5;i++)
        {
            cout<<"\n\n"<<no[i];
        }
        delete []no;
    }
};

int main()
{
    DMA a;
    return 0;
}