#include<iostream>
using namespace std;

class Static
{
    string name;
    static int count;

public:
    Static()
    {
        cout<<"\nEnter name:";
        cin>>name;
        count++;
        cout<<endl<<count<<" oject created!";
    }
    static void Totalcount()
    {
        cout<<"\nTotal objects created: "<<count;
    }
};

int Static::count=0;

int main()
{
    int n;
    cout<<"Enter no. of datas:";
    cin>>n;
    Static s[n];
    Static::Totalcount();
    return 0;
}