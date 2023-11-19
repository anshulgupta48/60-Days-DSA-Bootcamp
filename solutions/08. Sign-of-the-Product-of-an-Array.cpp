// ******** There is a function signFunc(x) that returns: 1 if x is positive, -1 if x is negative, 0 if x is equal to 0. You are given an integer array nums. Let product be the product of all values in the array nums. Return signFunc(product) ********

// <======== Example ========>
// Input: nums = [-1,-2,-3,-4,3,2,1]
// Output: 1

// Input: nums = [1,5,0,2,-3]
// Output: 0

// Input: nums = [-1,1,-1,1,-1]
// Output: -1




class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) {
                return 0;
            }
            else if(nums[i] < 0) {
                count++;
            }
        }

        if(count%2 == 0) {
            return 1;
        }

        return -1;
    }
};