#include <iostream>
using namespace std;

//caluclate the sum of first n natural numbers
// int sumN(int n){
//     int sum = 0;
//     for (int i = 1; i <=n; i++){
//         sum += i;
//     }
//     return sum;
// }

// calculate the factorial of a number
int facN(int n){
    if (n == 0){
        return 1;
    }

    int fact = 1;

    for (int i = 1; i <=n; i++){
        fact *= i;
    }

    return fact;
}


// calculate the sum of digit of a number
// int sumD(int n){
//     int sum = 0;

//     while (n > 0){
//         int digit = n % 10;
//         sum += digit;
//         n = n / 10;
//     }

//     return sum;
// }

// calculate the nCr binomial coefficient

int nCr(int n , int r){
    int num = facN(n);
    int rum = facN(r)*facN(n - r); 
    return num/rum;
}

int main (){
    int n;
    int r;
    cout << "Enter the two: ";
    cin >> n;
    cin >> r;
    cout << "binomal coeficient " <<" is: " << nCr(n, r ) << endl;
    return 0;
}