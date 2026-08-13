#include <iostream>
#include <string>
using namespace std;

class Show
{
    int seatsBooked;
    int totalSeats;

public:
    void getData()
    {
        cout << "Enter total seats: ";
        cin >> totalSeats;

        cout << "Enter seats booked: ";
        cin >> seatsBooked;
    }

    void displayStatus()
    {
        double occupancyPercentage = (seatsBooked * 100.0) / totalSeats;

        cout << "\nTotal Seats    : " << totalSeats << endl;
        cout << "Seats Booked   : " << seatsBooked << endl;
        cout << "Occupancy %    : " << occupancyPercentage << "%" << endl;
        cout << "Status         : ";

        if (occupancyPercentage > 80)
        {
            cout << "Housefull!" << endl;
        }
        else if (occupancyPercentage >= 40 && occupancyPercentage <= 80)
        {
            cout << "Decent Crowd" << endl;
        }
        else
        {
            cout << "Flop Show" << endl;
        }
    }
};

int main()
{
    Show show;

    show.getData();
    show.displayStatus();

    return 0;
}
