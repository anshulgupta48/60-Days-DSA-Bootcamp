// ******** Given an integer array nums, return the length of the longest strictly increasing subsequence. ********

// <======== Example ========>
// Input: nums = [10,9,2,5,3,7,101,18]
// Output: 4

// Input: nums = [0,1,0,3,2,3]
// Output: 4

// Input: nums = [7,7,7,7,7,7,7]
// Output: 1




class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(n);

        for(int i = 0; i < n; i++) {
            temp[i] = 1;
            for(int j = 0; j < i; j++) {
                if(nums[j] < nums[i]) {
                    temp[i] = max(temp[i], temp[j]+1);
                }
            }
        }

        int ans = *max_element(temp.begin(), temp.end());
        return ans;
    }
};