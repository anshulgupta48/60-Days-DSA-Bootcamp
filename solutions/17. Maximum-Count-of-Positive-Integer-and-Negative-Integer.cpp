// ******** Given an array nums sorted in non-decreasing order, return the maximum between the number of positive integers and the number of negative integers. In other words, if the number of positive integers in nums is pos and the number of negative integers is neg, then return the maximum of pos and neg. Note that 0 is neither positive nor negative. ********

// <======== Example ========>
// Input: nums = [-2,-1,-1,1,2,3]
// Output: 3

// Input: nums = [-3,-2,-1,0,0,1,2]
// Output: 3

// Input: nums = [5,20,66,1314]
// Output: 4




class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int posCount = 0;
        int negCount = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] > 0) {
                posCount++;
            }
            else if(nums[i] < 0) {
                negCount++;
            }
        }

        int ans = max(posCount, negCount);
        return ans;
    }
};