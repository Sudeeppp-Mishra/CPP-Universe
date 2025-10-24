/*
WAP to create a class vehicle that contains data as brand Read and display the brand of the vehicle. Create another class that contains type of vehicle, color
and year of manufacture of the vehicle. Derive all the information of class vehicle and display the information. (Use Single inheritace if possible)
*/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class vehicle
{
protected:
    std::string brand;

public:
    void getBrand()
    {
        cout << "Enter brand:" << endl;
        cin >> brand;
    }
};

class detail
{
protected:
    std::string type;
    std::string color;
    int yearOfManufacture;

public:
    void setData()
    {
        cout << "Enter type of vehicle:" << endl;
        cin >> type;
        cout << "Enter color:" << endl;
        cin >> color;
        cout << "Enter year of manufacture:" << endl;
        cin >> yearOfManufacture;
    }
};

class child : public vehicle, public detail
{
public:
    void display()
    {
        cout << "\n\n-_-_-_-_-_-_CAR DETAILS-_-_-_-_-_-_\n\n";
        cout << "Brand: " << brand << endl;
        cout << "Type: " << type << endl;
        cout << "Color: " << color << endl;
        cout << "Year of Manufacture: " << yearOfManufacture << endl;
        cout << "\n\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n\n";
    }
};

int main()
{
    child c;

    c.getBrand();

    c.setData();

    c.display();
    return 0;
}