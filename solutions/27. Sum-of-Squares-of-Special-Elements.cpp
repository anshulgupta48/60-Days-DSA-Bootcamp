// ******** You are given a 1-indexed integer array nums of length n. An element nums[i] of nums is called special if i divides n, i.e. n % i == 0. Return the sum of the squares of all special elements of nums. ********

// <======== Example ========>
// Input: nums = [1,2,3,4]
// Output: 21

// Input: nums = [2,7,1,19,18,3]
// Output: 63




class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;

        for(int i = 0; i < n; i++) {
            if(n%(i+1) == 0) {
                sum += nums[i] * nums[i];
            }
        }

        return sum;
    }
};