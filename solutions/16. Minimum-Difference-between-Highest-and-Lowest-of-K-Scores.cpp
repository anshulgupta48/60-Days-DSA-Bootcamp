// ******** You are given a 0-indexed integer array nums, where nums[i] represents the score of the ith student. You are also given an integer k. Pick the scores of any k students from the array so that the difference between the highest and the lowest of the k scores is minimized. Return the minimum possible difference. ********

// <======== Example ========>
// Input: nums = [90], k = 1
// Output: 0

// Input: nums = [9,4,1,7], k = 2
// Output: 2




class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = INT_MAX;
        sort(nums.begin(), nums.end());

        int i = 0;
        for(int j = k-1; j < n; j++) {
            ans = min(ans, nums[j] - nums[i]);
            i++;
        }

        return ans;
    }
};