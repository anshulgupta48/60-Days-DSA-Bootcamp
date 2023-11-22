// ******** Given a 0-indexed integer array nums, find a 0-indexed integer array answer where: answer.length == nums.length. answer[i] = |leftSum[i] - rightSum[i]|. Where: leftSum[i] is the sum of elements to the left of the index i in the array nums. If there is no such element, leftSum[i] = 0. rightSum[i] is the sum of elements to the right of the index i in the array nums. If there is no such element, rightSum[i] = 0. Return the array answer ********

// <======== Example ========>
// Input: nums = [10,4,8,3]
// Output: [15,1,11,22]

// Input: nums = [1]
// Output: [0]




class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        vector<int> leftSum(n);
        vector<int> rightSum(n);

        int sum = 0;
        for(int i = 0; i < n; i++) {
            leftSum[i] = sum;
            sum += nums[i];
        }

        sum = 0;
        for(int i = n-1; i >= 0; i--) {
            rightSum[i] = sum;
            sum += nums[i];
        }

        for(int i = 0; i < n; i++) {
            ans[i] = abs(leftSum[i] - rightSum[i]);
        }

        return ans;
    }
};