// ******** You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night. Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police. ********

// <======== Example ========>
// Input: nums = [1,2,3,1]
// Output: 4

// Input: nums = [2,7,9,3,1]
// Output: 12




class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int temp[101];
        temp[0] = nums[0];

        if(n == 1) {
            return temp[0];
        }

        temp[1] = max(temp[0], nums[1]);
        for(int i = 2; i < n; i++) {
            temp[i] = max(nums[i] + temp[i-2], temp[i-1]);
        }

        return temp[n-1];
    }
};