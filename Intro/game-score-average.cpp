//Program the gets three scores
//and Gets the Average

#include <iostream> 
using namespace std;


int main(){

cout << "This program will program will provide you with the average" << endl;

int firstNum;
int secondNum;
int thirdNum;


cout << "Enter the numbers below" << endl;
cin >> firstNum;
cin >> secondNum;
cin >> thirdNum;
int result = (firstNum + secondNum + thirdNum)/3;

cout << result << endl;

return 0;
}

