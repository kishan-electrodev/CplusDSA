#include <iostream>
#include <climits>
using namespace std;


int lineraSearch(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

void reverseArray( int arr[], int size){
    int start = 0;
    int end = size -1;
    
    while( start < end){
        int tem = arr[start];
        arr[start] = arr[end];
        arr[end] = tem;
        start++;
        end--;
    };

}
int main(){
    //find smallest number in an array
    int arr[] = {3,54,12,4,-2,90,23,0};
    int size = sizeof(arr)/sizeof(arr[0]);

    // int largest = INT_MIN;
    // int largestIndex = -1;
    // for (int i = 0; i < size; i++){
    //     if(arr[i] > largest){
    //         largest = arr[i];
    //         largestIndex = i;
    //     }
    // }

    // cout << "Largest number in the array is: " << largest << " at index " << largestIndex << endl;

    // reverseArray(arr, size);
    // for(int i = 0; i < size; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;



    return 0;
}