#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;


// find the pair of elements in the array whose sum is equal to the given target
vector<int> pairSum(vector<int>& nums, int target){
    vector<int> ans;
    int n = nums.size();
    //brute force approach
    // for(int i =0; i < n; i++){
    //     for(int j = 1+i; j<n; j++){
    //         if(nums[i] + nums[j] == target){
    //             ans.push_back(i);
    //             ans.push_back(j);
    //             break;
    //             return ans;
    //         }
    //     }
    // }

    // 2 pointer approach
    int start = 0, end = n-1;
    while(start < end){
        int pairSum = nums[start] + nums[end];
        if(pairSum > target) end--;
        else if(pairSum < target) start++;
        else{
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
    }
    return ans; // if no such pair found
}

// find the majority element in the array
int majorityElement(vector<int> nums){
    // brute force approach
    int n = nums.size();
    // int ans = -1;
    // for(int val: nums){
    //     int frequency = 0;
    //     for(int elem: nums){
    //         if(elem == val) frequency++;
    //     }

    //     if(frequency > n/2){
    //         ans = val;
    //         break;
    //     }
    // }

    // optimal approach
    // int ans = nums[0];
    // int frequency = 1;
    // sort(nums.begin(), nums.end());

    // for (int i = 1; i < n; i++){
    //     if(nums[i] == nums[i+1]) frequency++;
    //     else if(nums[i] != nums[i+1]) frequency = 0;

    //     if (frequency > n/2){
    //         ans = nums[i];
    //         break;
    //         return ans;
    //     }
    // }

    //moore's voting algorithm
    int ans = 0;
    int frequency = 0;
    
    for(int i = 0; i < n; i++){
        if(frequency == 0) ans = nums[i];
        if(nums[i] == ans) frequency++;
        else frequency--;
    }

    int count = 0;
    for(int elm : nums){
        if(elm == ans) count++;
    }

    if(count > n/2){
        return ans;
    }
    
    return -1;
}

int main(){
    // vector<int> nums = {2,7,11,15};
    // int target = 13;

    // vector<int> result = pairSum(nums, target);
    // cout << result[0] << " " << result[1] << endl;

    vector<int> nums = {3, 2, 4};
    cout << majorityElement(nums) << endl;
    return 0;
}