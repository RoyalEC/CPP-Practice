// Game Stats 3.0
// Demonstrates constants

#include <iostream>
using namespace std;

int main()
{

    const int ALIEN_POINTS = 150;
    int aliensKilled = 10;
    int score = aliensKilled * ALIEN_POINTS;
    cout << "score: " << score << endl;

    enum difficulty
    {
        Novice,
        Easy,
        Normal,
        Hard,
        Unbeatable
    };
    difficulty myDifficulty = Easy;

    enum shipCost
    {
        fighterCost = 25,
        bomberCost,
        crusierCost = 50
    };
    shipCost myShipCost = bomberCost;
    cout << "\nTo upgrade my ship to a cruiser will cost " << crusierCost - myShipCost << " Resource Points.\n";
    return 0;
}
