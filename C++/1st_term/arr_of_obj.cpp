#include <iostream>
using namespace std;

class Detail
{
    string name;
    int age;

public:
    Detail()
    {
        cout << "Enter name and age:";
        cin >> name >> age;
    }

    void display()
    {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
    }
};

int main()
{
    int n, i;
    cout << "Enter no. of datas: ";
    cin >> n;
    Detail d[n]; // Here the constructor gets automatically called n times so no need to worry about it

    for (i = 0; i < n; i++)
    {
        d[i].display();
    }
    return 0;
}