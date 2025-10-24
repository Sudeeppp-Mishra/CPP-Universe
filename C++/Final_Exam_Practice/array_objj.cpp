/*
Create a class that captures and display the airline tickets. It should contain departure and arrival city, the flight number and seat arrangement. 
The seat arrangement must contain the row and the seat number (like 12F). Display tickets for n number of passengers.
*/

#include<iostream>
#define SIZE 10
using namespace std;

class Airline
{
    string departure, arrival;
    const string flight_no = "240F";
    string seat_no;

    public:

    void get_info()
    {
        cout<<"\nEnter the city of departure: "<<endl;
        cin>>departure;
        cout<<"\nEnter the Destination: "<<endl;
        cin>>arrival;
        cout<<"\nEnter your preferred seat no among (A,B,C,D) and row(1,2,3,4) [eg: enter 2A if you want seat of row 2]:"<<endl;
        cin>>seat_no;
    }

    void display()
    {
        cout<<"\n\n__________SHREE AIRLINES__________\n\n";
        cout<<"\nDeparture: "<<departure<<"\n\nArrival City: "<<arrival<<"\n\nFlight No: "<<flight_no<<"\n\nSeat No: "<<seat_no<<endl;
    }
};

int main()
{
    Airline a[SIZE];
    for(int i=0;i<3;i++)
    {
        a[i].get_info();
    }
    for(int i=0;i<3;i++)
        a[i].display();

        return 0;
}