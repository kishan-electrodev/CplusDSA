#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number to create start pattern: ";
    cin >> n;

    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= n; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    //  for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= n; j++){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    //  for (int i = 0; i < n; i++){
    //     char ch = 'A';
    //     for (int j = 0; j < n; j++){
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // int count = 1;
    //  for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= n; j++){
    //         cout << count++ << " ";
    //     }
    //     cout << endl;
    // }

    //  for (int i = 0; i < n; i++){
    //     for (int j = 0; j <= i; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    //  for (int i = 0; i < n; i++){
    //     for (int j = 0; j < i+1; j++){
    //         cout << i+1 << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++){
    //     char ch = 'A';
    //     for (int j = 0; j < i+1; j++){
    //         cout << (char)(ch+i) << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++){
    //     for (int j = 1; j <= i+1; j++){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++){
    //     for (int j = i+1; j >= 1; j--){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // Inverted Traingle Pattern
    // for (int i = 0; i < n; i++){

    //     for(int k = 0; k < i; k++){
    //             cout << "  ";
    //     };

    //     for (int j = n - i; j >= 1; j--){
    //         cout << i+1 << " ";
    //     }
    //     cout << endl;
    // }

    // char ch = 'A';
    // for (int i = 0; i < n; i++){

    //     for(int k = 0; k < i; k++){
    //             cout << "  ";
    //     };

    //     for (int j = n - i; j >= 1; j--){
    //         cout << (char)(ch+i) << " ";
    //     }
    //     cout << endl;
    // }

    //Pyramid Pattern
    // for (int i = 0; i < n; i++){

    //     for(int k = n - i; k > 1; k--){
    //             cout << "  ";
    //     };

    //     for (int j = 0; j <= i; j++){
    //         cout << j+1 << " ";
    //     }

    //     for (int l = i; l >= 1; l--){
    //         cout << l << " ";
    //     }

    //     cout << endl;
    // }

    // Hollow Diamond Pattern
    // for (int i = 0; i < n; i++){
    //     for (int j = 1; j < n - i; j++){
    //         cout << " ";
    //     }

    //     cout << "*";

    //     if ( i != 0){
    //         for (int j = 0 ; j < 2*i - 1; j++){
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }

    //     cout << endl;

    // }

    // for (int i = n-1; i > 0; i--){
    //     for (int j = 0; j < n-i; j++){
    //         cout << " ";
    //     }

    //     cout << "*";

    //     if ( i != 1){
    //         for (int j = 0 ; j < 2*i - 3; j++){
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }

    //     cout << endl;
        
    // }

    //Butterfly Pattern
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << "*";
        }

        for (int j = 0; j < (n - (i+1)) * 2; j++){
            cout << " ";
        }

        for (int j = 0; j <= i; j++){
            cout << "*";
        }
        
        cout << endl;
    }

    for (int i = 0; i < n ; i++){
        for (int j = 0; j < n - i; j++){
            cout << "*";
        }

        for (int j = 0; j < i * 2; j++){
            cout << " ";
        }

        for (int j = 0; j < n - i; j++){
            cout << "*";
        }
        
        cout << endl;
    }

    return 0;
}