#include<iostream>
#include<cmath>
using namespace std;

class mean;// forward declaration

class Numbers
{
    int n1, n2;

public:
    void getNum()
    {
        cout<<"Enter two numbers:";
        cin>>n1>>n2;
    }
    friend class mean; // It means min class is friend with class Numbers not vice versa hence class min can easily access data members of Numbers
};

class mean
{
    Numbers n;
    public:
        void minimum()
        {
            n.getNum();
            cout<<"Mean: "<<(n.n1+n.n2)/2;
        }
};

int main()
{
    mean m;
    m.minimum();
    return 0;
}