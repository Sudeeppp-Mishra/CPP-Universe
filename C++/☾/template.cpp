#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class Display
{
public:
    template <typename arr>
    void display(arr array)
    {
        cout<<"Value:"<<array<<endl;
    }
};

int main()
{
    int arr[5], i;
    cout<<"Enter the datas of array:";
    for(i=0;i<5;i++)
        cin>>arr[i];
    
    Display value;
    for(i=0;i<5;i++)
    {
        value.display(arr[i]);
    }
}
