#include <iostream>
#include <string>
using namespace std;

class Weekend
{
    int pocketMoney;
    int energyLevel;

public:
    void getData()
    {
        cout << "Enter pocket money: ";
        cin >> pocketMoney;

        cout << "Enter energy level (1-10): ";
        cin >> energyLevel;
    }

    void displayPlan()
    {
        cout << "\nPocket Money : " << pocketMoney << endl;
        cout << "Energy Level : " << energyLevel << endl;
        cout << "Weekend Plan : ";

        if (pocketMoney < 500 && energyLevel < 5)
        {
            cout << "Netflix & Sleep" << endl;
        }
        else if (pocketMoney >= 500)
        {
            cout << "Outing!" << endl;
        }
        else
        {
            cout << "Just Chill at Hostel" << endl;
        }
    }
};

int main()
{
    Weekend weekend;

    weekend.getData();
    weekend.displayPlan();

    return 0;
}
