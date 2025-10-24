#include <iostream>
using namespace std;

class Temperature {
private:
    int celsius;

public:
    // Constructor to initialize Temperature with an int value
    Temperature(int temp) : celsius(temp) {}

    // Conversion operator to convert Temperature to int
    operator int() const {
        return celsius;
    }

    // Method to display the temperature
    void display() const {
        cout << "Temperature: " << celsius << "°C" << endl;
    }
};

int main() {
    Temperature t(25);
    int temp = t; // Implicit conversion from Temperature to int
    cout << "Temperature in int: " << temp << "°C" << endl;

    return 0;
}