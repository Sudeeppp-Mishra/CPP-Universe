/*
    Write a c++ progrma to find the square of a number using template.
*/

#include<iostream>
using namespace std;

template <typename T> 
class Square
{

public:
    T square(T data)
    {
       return data*data;
    }


};

int main()
{
    //square <int/float/double/char/string> (56)
    Square <int>obj;
    cout<<"Square of integer:"<<obj.square(4);

    cout<<endl;

    Square <double>obj1;
    cout<<"Square of double:" <<obj1.square(5.8);
    cout<<endl<<endl;
    return 0;
}