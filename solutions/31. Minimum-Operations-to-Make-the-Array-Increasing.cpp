// ******** You are given an integer array nums (0-indexed). In one operation, you can choose an element of the array and increment it by 1. Return the minimum number of operations needed to make nums strictly increasing. An array nums is strictly increasing if nums[i] < nums[i+1] for all 0 <= i < nums.length - 1. An array of length 1 is trivially strictly increasing. ********

// <======== Example ========>
// Input: nums = [1,1,1]
// Output: 3

// Input: nums = [1,5,2,4,1]
// Output: 14

// Input: nums = [8]
// Output: 0




class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for(int i = 1; i < n; i++) {
            if(nums[i] > nums[i-1]) {
                continue;
            }
            else {
                int req = (nums[i-1] + 1) - nums[i];
                nums[i] = nums[i-1] + 1;
                ans += req;
            }
        }

        return ans;
    }
};