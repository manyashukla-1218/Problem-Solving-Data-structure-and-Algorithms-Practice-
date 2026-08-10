#include<iostream>
#include<vector>
#include <climits>
using namespace std;

 int maxSubarraySum(vector<int> &arr) {
        // code here...
        int n  = arr.size();
        int maxi = INT_MIN, prefix = 0;
        for(int i=0;i<n;i++)
        {
            prefix+=arr[i];
            maxi = max(maxi,prefix);
            if(prefix<0)
            prefix=0;
        }
        return maxi;
        
    }
    int main() {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = maxSubarraySum(arr);

    cout << "Maximum Subarray Sum: " << ans << endl;

    return 0;
}