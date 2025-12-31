#include <iostream>
using namespace std;

int main (){
    int n;
    bool isPrime = true;
    cout << "Enter the number to check prime or not: ";
    cin >> n;
    for(int i = 2; i*i <= n; i++){
        cout << "Checking divisibility by " << i << endl;
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime)
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;
   
    return 0;
}