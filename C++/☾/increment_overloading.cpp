#include<iostream>
using namespace std;

class Increment
{
    int data;
public:
    Increment(int a)
    {
        data=a;
    }
    Increment operator ++()
    {
        return Increment(++data);
    }

    Increment operator ++(int)
    {
        return Increment(data++);
    }

    void display()
    {
        cout<<"Value of data is : "<<data;
    }
};

int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    Increment n(num);
    Increment m (0); // But I can't do like // Num m(0) = ++n; because initialization and declaration is on the same line which will throw an error here so we need to either
                // do this way or we can do Num m = ++n;
    m = ++n;
    m = n++;
    m.display();
    return 0;
}