#include <iostream>
using namespace std;

class MyClass {
public:
    int value;

    // Constructor that allows conversion from int to MyClass
    MyClass(int v) : value(v) {}
};

int main() {
    MyClass obj = 10; // Implicit conversion from int to MyClass
    cout << obj.value << endl; // Outputs: 10
    return 0;
}