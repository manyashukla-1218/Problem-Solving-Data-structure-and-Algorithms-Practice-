// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

    int findDuplicate(vector<int>& nums) {

        // Phase 1: Detect cycle

        int slow = nums[0];
        int fast = nums[0];

        do {

            slow = nums[slow];

            fast = nums[nums[fast]];

        } while (slow != fast);


        // Phase 2: Find cycle entrance

        slow = nums[0];

        while (slow != fast) {

            slow = nums[slow];

            fast = nums[fast];
        }

        return slow;
    }
};

int main() {

    int n;

    cout << "Enter n: ";
    cin >> n;

    vector<int> nums(n + 1);

    cout << "Enter " << n + 1 << " elements: ";

    for (int i = 0; i < n + 1; i++) {
        cin >> nums[i];
    }

    Solution obj;

    int answer = obj.findDuplicate(nums);

    cout << "Duplicate number: " << answer << endl;

    return 0;
}