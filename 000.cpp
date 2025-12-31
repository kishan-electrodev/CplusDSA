#include <iostream>
using namespace std;

int main(){
    cout<<"Hello, world!\n";

    //ASCII values of characters
    char letter = 'A';
    int asciiValue = letter;
    cout << "The size of a is " << sizeof(letter) << endl;
    cout << "The size of asciiValue is " << sizeof(asciiValue) << endl;
    cout << asciiValue << endl;

    //type casting
    double pi = 3.14;
    int intPi = (int)pi; //explicit type casting
    cout << "The value of intPi is " << intPi << "\n";

    //input from user
    int money;
    cout << "Enter the amount of money you have: ";
    cin >> money;

    cout << "You have " << money << "rs.\n";
    return 0;
}