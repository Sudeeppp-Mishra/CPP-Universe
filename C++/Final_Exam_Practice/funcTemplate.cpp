#include <iostream>
using std::cin;
using std::cout;
using std::endl;

template <typename T>
T max(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    cout << "\nMax. No: " << max<int>(32, 56);
    cout << "\nMax. No: " << max<float>(3.5f, 2.6f);
}