#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Enter a number to get sum of first n odd natural numbers: ";
    cin >> n;
    int i = 1;
    int sum = 0;
    // while (i <= n){
    //     sum += i;
    //     i++;
    // }
    // for (int i = 1; i <= n; i++){
    //     sum += i;
    // };
    while (i <= n){
        sum += i;
        i +=2;
    }
    cout << "The sum of first " << n << " odd natural numbers is: " << sum << endl;
    return 0;
}