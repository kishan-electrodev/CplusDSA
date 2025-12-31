#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Your Number: ";
    
    if (!(cin >> n)){
        cout << "Invalid input. PLease Enter the valid number.\n";
        return 1;
    }else if (n % 2 == 0){
        cout << n << " is Even Number.\n";
    }else{
        cout << n << " is Odd Number.\n";
    }
    
    return 0;
}