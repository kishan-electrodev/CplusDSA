#include <iostream>
using namespace std;

int BinaryToDecial(int n){
    int ans = 0;
    int power = 1;
    
    while ( n > 0){
        ans += (n % 2) * power;
        power*= 10;
        n = n / 2;
    }

    return ans;
}

int decimalToBinary(int n){
    int ans = 0; 
    int power = 1;

    while ( n > 0){
        ans += (n % 10) * power;
        power*= 2;
        n = n / 10;
    }

    return ans;
}

int main(){
    cout << "Enter the binary number of convert into decimal: ";
    int n;
    cin >> n;
    cout << "The decimal number is: " << decimalToBinary(n) << endl;
    
    return 0;
}