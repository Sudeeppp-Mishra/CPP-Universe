//Swapping but accessing variables inside main using referencing
#include <iostream>
using namespace std;

class B; // Forward declaration of class B so that we can pass B's object in class A's friend function

class A {
    int a;
public:
    // Constructor should be public to allow object creation in main
    A() {
        cout << "Enter a: ";
        cin >> a;
    }

    // Declare swap function as a friend
    friend void swap(A &n1, B &n2);

    // Function to display value of a
    void display() {
        cout << "a = " << a << endl;
    }
};

class B {
    int b;
public:
    // Constructor should be public to allow object creation in main
    B() {
        cout << "Enter b: ";
        cin >> b;
    }

    // Declare swap function as a friend
    friend void swap(A &n1, B &n2);

    // Function to display value of b
    void display() {
        cout << "b = " << b << endl;
    }
};

void swap(A &n1, B &n2) {
    n1.a = n1.a + n2.b;
    n2.b = n1.a - n2.b;
    n1.a = n1.a - n2.b;
}

int main() {
    A n1;
    B n2;
    
    cout << "\nBefore Swapping:" << endl;
    n1.display();
    n2.display();

    // Swap the values using the friend function
    swap(n1, n2);

    cout << "\nAfter Swapping:" << endl;
    n1.display();
    n2.display();

    return 0;
}