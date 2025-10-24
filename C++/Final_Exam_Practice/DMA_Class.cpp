#include<iostream>
using namespace std;

class DMA_Class
{
private:
    string name;
public:
    DMA_Class(): name("Sudeep"){}

    void display()
    {
        cout<<"\nName; "<<name;
    }
};

int main()
{
    DMA_Class *obj_ptr=new DMA_Class;
    obj_ptr->display(); // Same as *(obj_ptr).display();
}

