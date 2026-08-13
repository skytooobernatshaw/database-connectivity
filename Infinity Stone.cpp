#include <iostream>
#include <string>
using namespace std;

class Collector
{
    int stonesFound;

public:
    void getData()
    {
        cout << "Enter number of stones found (0-10): ";
        cin >> stonesFound;
    }

    void displayStatus()
    {
        cout << "\nStones Found: " << stonesFound << endl;
        cout << "Status      : ";

        switch(stonesFound)
        {
            case 0:
            case 1:
            case 2:
                cout << "DEAD!" << endl;
                break;
            case 3:
            case 4:
            case 5:
                cout << "Still Searching!" << endl;
                break;
            case 6:
            case 7:
                cout <<"Getting  Close! " << endl;
                break;
            case 8:
            case 9:
            case 10:
                cout << "Snap Ready!" << endl;
            break;
            default:
                cout << "KO7" << endl;
        }
    }
};

int main()
{
    Collector collector;

    collector.getData();
    collector.displayStatus();

    return 0;
}
