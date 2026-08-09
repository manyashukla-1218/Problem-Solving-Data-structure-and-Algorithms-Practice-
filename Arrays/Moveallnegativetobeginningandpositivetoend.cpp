// Given an array containing both positive and negative numbers in random order. The task is to rearrange the array elements so that all negative numbers appear before all positive numbers.

// Note:

// Given array does not contain any zeroes.
// Order of resultant array does not matter.
// Example : 

// Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
// Output: -12 -13 -5 -7 -3 -6 11 6 5
#include <iostream>
#include <vector>
using namespace std;
void rearrange(vector<int>&arr){
   int i=0;
   int j=arr.size()-1;
   while(i<=j){
    if(arr[i]<0)  i++;
    else if(arr[j]>0) j--;
    else {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
 
   }
    
}
int main(){
    vector<int> arr = {-12,-1,-3,5,-7,9,-8,4};
    rearrange(arr);
    for(int x : arr){
        cout<<x<<" ";
    }
    return 0;
}
