/*
Create a class that captures and display the airline tickets. It should contain departure and arrival city, the flight number and seat arrangement. 
The seat arrangement must contain the row and the seat number (like 12F). Display tickets for n number of passengers.
*/

#include<iostream>
using namespace std;

class ticket
{
    string departure, arrival;
    long int flight_no;
    int row;
    string seat_no;
    public:
    void display_info()
    {
        cout<<"\n ..........SHREE AIRLINES.......... \n"<<endl;
        cout<<"Departure: "<<departure<<"\n"<<"Arrival: "<<arrival<<"\n"<<"Flight No: "<<flight_no<<"\n"<<"Seat No: "<<row<<seat_no<<endl;
    }
    void get_info()
    {
    cout<<"Enter Departure city, arrival city: ";
    cin>>departure>>arrival;
    cout<<"Chose a flight no(last digits only):\ni)SHA225 \nii)SHA226 \niii)SHA345 \niv)SHA425:\n";
    cin>>flight_no;
    cout<<"\nEnter your preffered seat no (A,B,C,D,E,F,G) and row(1,2,3,4,5,6,7,8,9,10): ";
    cin>>seat_no>>row;
    }
};

int main()
{
    ticket customer;
    customer.get_info();
    customer.display_info();
    return 0;
}