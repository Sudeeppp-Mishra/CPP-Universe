#include <iostream>
using namespace std;

class increment
{
    int no;

public:
    increment() {}

    increment(int n) : no(n) {}

    increment operator++(int)
    {
        return increment(no++);
    }

    void diplay()
    {
        cout << no << endl;
    }
};

int main()
{
    increment i(30), i1;
    i1 = i++;
    i1.diplay();
}