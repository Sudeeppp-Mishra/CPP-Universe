#include <iostream>
#include <cmath>
using namespace std;

class alpha
{
protected:
    int data1;

public:
    alpha()
    {
        cout << "\nEnter data1:";
        cin >> data1;
    }
    void display()
    {
        cout << "\n1st data: " << data1;
    }
};

class beta
{
protected:
    int data2;

public:
    beta()
    {
        cout << "\nEnter data2:";
        cin >> data2;
    }
    void display()
    {
        cout << "\n2nd data: " << data2;
    }
};

class gamma : public alpha, public beta
{
public:
    void minimum()
    {
        cout << "\nMinimum value is: " << min(data1, data2);
    }
};

int main()
{
    gamma g;
    g.alpha::display();
    g.beta::display();
    g.minimum();
    return 0;
}