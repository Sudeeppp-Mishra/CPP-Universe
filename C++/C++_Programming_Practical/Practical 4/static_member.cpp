/*
Create a class that includes a data member that holds a serial number for each object created from a class i.e., the first object created will be 
numbered 1, 2nd will be numbered 2 and so on. (Use static member and function if needed).
*/
#include <iostream>
using namespace std;

class A {
    static int count;  // Static member to keep track of the number of objects
    int serialNumber;  // Each object's serial number

public:
    A() {
        serialNumber = ++count; 
    }

    void show_serialNumber() {
        cout << "Object " << serialNumber << " created!" << endl;
    }

    static void show_count() {
        cout << "Total objects created: " << count << endl; 
    }
};

// Initialize static member
int A::count=0; 

int main() {
    A n1, n2, n3;
    n1.show_serialNumber();  // Display serial number of n1
    n2.show_serialNumber();  // Display serial number of n2
    n3.show_serialNumber();  // Display serial number of n3

    A::show_count();  // Display total number of objects created
    return 0;
}