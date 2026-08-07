//Given an array of integers arr[], the task is to find the maximum and minimum elements in the array using the minimum number of comparisons.

// Examples:

// Input: arr[] = [3, 5, 4, 1, 9]
// Output: [1, 9]
// Explanation: The minimum element is 1, and the maximum element is 9.

// Input: arr[] = [22, 14, 8, 17, 35, 3]
// Output: [3, 35] 
// Explanation: The minimum element is 3, and the maximum element is 35.


#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;

vector<int> findMinMax(vector<int>& arr) {
    vector<int> sortedArr = arr;
    
    // Sort array
    sort(sortedArr.begin(), sortedArr.end()); 
    return {sortedArr[0], sortedArr[sortedArr.size()-1]};
}

int main(){
  vector<int> arr = {3,4,7,6,9,12};
  vector<int> result = findMinMax(arr);
  cout<<result[0]<<" "<<result[1]<<endl;
  return 0;
}