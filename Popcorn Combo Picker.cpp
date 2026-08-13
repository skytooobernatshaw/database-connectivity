#include <iostream>
#include <string>
using namespace std;

class Ticket
{
    string movieGenre;

public:
    void getData()
    {
        cout << "Enter movie genre (Horror/Comedy/Action): ";
        cin >> movieGenre;
    }

    void displayCombo()
    {
        cout << "\nMovie Genre : " << movieGenre << endl;
        cout << "Snack Combo : ";

        if (movieGenre == "Horror")
        {
            cout << "Popcorn + Cold Coffee" << endl;
        }
        else if (movieGenre == "Comedy")
        {
            cout << "Nachos + Soda" << endl;
        }
        else if (movieGenre == "Action")
        {
            cout << "Popcorn + Energy Drink" << endl;
        }
        else
        {
            cout << "Invalid genre!" << endl;
        }
    }
};

int main()
{
    Ticket ticket;

    ticket.getData();
    ticket.displayCombo();

    return 0;
}
