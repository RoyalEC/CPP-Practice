//Designers Network Program
//Demonstrates logical operators

#include <iostream>
#include <string>
using namespace std;

int main (){

string userName;
string passWord;
bool success;

cout << "\tGame Designer's Network\n";

do {
    cout << "\nUsername: ";
    cin >> userName;

    cout << "\nPassword: ";
    cin >> passWord;

    if (userName == "S.Meier" && passWord == "civilization"){
        cout << "\nHey, Sid.";
        success = true;
    } else if (userName == "S.Miyamoto" && passWord == "mariobros"){
        cout << "\nWhat's up, Shigeru?";
        success = true;
    } else if (userName == "W.Wright" && passWord == "thesims"){
        cout << "\nHow goes it, Will?";
        success = true;
    } else if (userName == "guest" || passWord =="guest"){
        cout << "\nWelcome, guest.";
        success = true;
    } else {
        cout << "\nYour login failed";
        success = false;
    }


}while (!success);

    return 0;
}