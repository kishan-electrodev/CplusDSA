#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] = {4,-3,1,2,3,4,5,-10,7,-10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxSum = INT_MIN;

    // for (int start = 0; start < n; start++){
    //     for(int end = start; end < n; end++){
    //         for(int i = start; i <= end; i++){
    //             cout << arr[i];
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    // for (int start = 0; start < n; start++){
    //     int sum = 0;
    //     for(int end = start; end < n; end++){
    //         sum += arr[end];
    //         maxSum = max(maxSum, sum);
    //     }
    // }

    // kadane's Algorithm
    int currentSum = 0;
    for(int i = 0; i < n; i++){
        currentSum += arr[i];
        maxSum = max(maxSum, currentSum);
        if(currentSum < 0){
            currentSum = 0;
        }
    }

    cout << maxSum;
    

    return 0;
}