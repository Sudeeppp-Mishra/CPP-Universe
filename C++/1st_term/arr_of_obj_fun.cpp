#include <iostream>
using namespace std;

class Detail
{
    string name;
    int age;

public:
    void get_info()
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
    Detail d[n];
    for (i = 0; i < n; i++)
    {
        d[i].get_info();
    }

    for (i = 0; i < n; i++)
    {
        d[i].display();
    }
    return 0;
}