#include<iostream>
using namespace std;

class No1
{
    int n1;

public: 
    void GetNo()
    {
        cout<<"\nEnter no!";
        cin>>n1;
    }

    friend class C;
};

class No2
{
    int n2;

public:
    void GetNo()
    {
        cout<<"\nEnter no!";
        cin>>n2;
    }
    
    friend class C;
};

class C
{
    int mean;

    public:
        void Mean(No1 n1, No2 n2)
        {
            cout<<"\n\nMean of "<<n1.n1<<" and "<<n2.n2<<" is "<<(n1.n1+n2.n2)/2<<endl;
        }
};

int main()
{
    No1 n1;
    No2 n2;
    n1.GetNo();
    n2.GetNo();

    C c;
    c.Mean(n1, n2);
}