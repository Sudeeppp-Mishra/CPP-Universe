#include<iostream>
#include<cmath>
using namespace std;

class Cuboid
{
    int l;
public:
    Cuboid() {}

    Cuboid(int l): l(l) {}

    Cuboid operator+(Cuboid c)
    {
        Cuboid temp;
        temp.l=this->l+c.l;
        return temp;
    }

    void voluem()
    {
        cout<<"\nVolume of cuboid with length "<<l<<" is: "<<pow(l,3);
    }
};

int main()
{
    int l1,l2;
    cout<<"\nEnter length of two cuboids: "<<endl;
    cin>>l1>>l2;

    Cuboid c1(l1),c2(l2),c3;
    c1.voluem();
    c2.voluem();

    c3=c1+c2;
    c3.voluem();
}