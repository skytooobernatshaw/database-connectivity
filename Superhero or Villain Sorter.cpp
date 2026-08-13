#include <iostream>
#include <string>
using namespace std;

class Character
{
    string name;
    int moralityScore;

public:
    void getData()
    {
        cout << "Enter character name: ";
        cin >> name;

        cout << "Enter morality score: ";
        cin >> moralityScore;
    }

    void displayCharacterType()
    {
        cout << "\nCharacter Name : " << name << endl;
        cout << "Morality Score : " << moralityScore << endl;
        cout << "Character Type : ";

        if (moralityScore > 5)
        {
            cout << "Hero" << endl;
        }
        else if (moralityScore < 0)
        {
            cout << "Villain" << endl;
        }
        else
        {
            cout << "Anti-Hero (it's complicated)" << endl;
        }
    }
};

int main()
{
    Character character;

    character.getData();
    character.displayCharacterType();

    return 0;
}
