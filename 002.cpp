#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Enter Your Character: ";
    cin >> c;

    if(c >= 'a' && c <= 'z'){
        cout << c << " is lowercase.\n";
    }else{
        cout << c << " is uppercase.\n";
    }
    
    return 0;
}