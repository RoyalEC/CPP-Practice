// Lost Fortune
// A personalized adventure

#include <iostream>
#include <string>
using namespace std;

int main()
{

    cout << "Welcome to Lost Fortune" << endl;

    int var;
    int small;
    string lastName;

    cout << "Please enter the following for your personalized adventure\n" << endl;
    cout << "Enter a number: ";
    cin >> var;
    cout << "Enter a number, smaller than the first: ";
    cin >> small;
    cout << "Enter your last name: " << endl;
    cin >> lastName;

    cout << "A brace group of " << var << "set out on a quest -- in search of the lost treasure of the Ancient Dwarves. The group was led by that legendary rogue, " << lastName << "." << endl;
    cout << "\nAlong the way, a band of marauding ogres ambushed the party. ALl fought bravely under the command of " << lastName << ", and the ogres were defeated. but at a cost. Of the adventurers, " << small << "were vanquished, leaving just " << var - small << "in the group." << endl;
    cout << "\nThe party was about to give up all hope. But while laying the desceased to rest, they stumbled upon the buried fortune. So the adventurers split 900 gold pieces." << endl;
    cout << lastName << " held on to the extra 4 pieces to keep things fair of course." << endl;

    return 0;
}