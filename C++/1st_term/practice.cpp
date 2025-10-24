#include<iostream>
using namespace std;

class Dynamic_Construtor
{
    int n;

public:
    Dynamic_Construtor(int a): n(a) {}
    Dynamic_Construtor(Dynamic_Construtor &obj): n(obj.n){}

    void display()
    {
        cout<<"n is "<<n<<endl;
    }
};
int main()
{
    Dynamic_Construtor c(10), d(44);
    c.display();
    d.display();
    
    Dynamic_Construtor e(c);
    e.display();
    return 0;
}