#include<iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
    return a+b;
}

template <typename T>
T diff(T a, T b)
{
    return a-b;
}

template <typename T>
T product(T a, T b)
{
    return a*b;
}

template <typename T>
T div(T a, T b)
{
    try
    {
        if(b!=0)
            return a/b;
        else
            throw b;
    }
    catch(int b)
    {
        cerr<<" 2nd no is "<<b<<endl;
    }
    
}

int main()
{
    int a,b;
    double d1, d2;
    cout<<"Enter two integer values:";
    cin>>a>>b;

    cout<<"Enter two double values:";
    cin>>d1>>d2;

    cout<<"Integer calculation:\n";
    cout<<"Sum: "<<add<int>(a,b);
    cout<<endl<<"Diff: "<<diff<int>(a,b)<<endl;
    cout<<"Product: "<<product<int>(a,b)<<endl;
    cout<<"Division: "<<div<int>(a,b)<<endl;

    cout<<"Float calculation:\n";
    cout<<"Sum: "<<add<double>(d1,d2);
    cout<<endl<<"Diff: "<<diff<double>(d1,d2)<<endl;
    cout<<"Product: "<<product<double>(d1,d2)<<endl;
    cout<<"Division: "<<div<double>(d1,d2)<<endl;
}
