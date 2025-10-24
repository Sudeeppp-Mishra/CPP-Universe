#include<iostream>
using namespace std;

template <typename T>

//T max(T a, T b) --> This is an error it will show max is ambiguious where it will be called
T Mymax(T a, T b) // don't use max as the name of function since inside std namespace there is a max namespace which will make the function max ambiguious so it is better to use std::(required function)
{
    if(a>b)
        //cout<<a<<" is max";
        return a;
    else if(b>a)
        //cout<<b<<" is max";
        return b;
    else
        //cout<<"They are equal";
        return 1;
}

int main()
{
    //max<char>('A','B');
    cout<<Mymax<int>(4,5);
    cout<<Mymax<char>('A','B');
    return 0;
}