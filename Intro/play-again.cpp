//Play Again Program
//Demonstrates the while loop

#include <iostream>
using namespace std;

int main(){

char again = 'y';
while (again == 'y'){
    cout << "\n**Played an exciting game**";
    cout << "\nDo you want to play again? (y/n): ";
    cin >> again;

}
cout << "Okay Bye.";

return 0;

}