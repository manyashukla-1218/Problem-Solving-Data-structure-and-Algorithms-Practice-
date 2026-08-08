// Given an integer array arr[] and an integer k, find and return the kth smallest element in the given array.
// Note: The kth smallest element is determined based on the sorted order of the array.

// Examples :

// Input: arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
// Output: 5
// Explanation: 4th smallest element in the given array is 5.
// Input: arr[] = [7, 10, 4, 3, 20, 15], k = 3
// Output: 7
// Explanation: 3rd smallest element in the given array is 7.


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int  kthsmallest(vector<int>&arr, int k){
    sort(arr.begin(),arr.end());
    return arr[k-1];
}
int main(){
    vector<int>arr = {10,3,4,5,9,7,12,34,5};
    int k = 3;
    cout<< kthsmallest(arr,k);
    return 0;
} 

