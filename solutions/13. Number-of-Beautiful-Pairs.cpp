// ******** You are given a 0-indexed integer array nums. A pair of indices i, j where 0 <= i < j < nums.length is called beautiful if the first digit of nums[i] and the last digit of nums[j] are coprime. Return the total number of beautiful pairs in nums. Two integers x and y are coprime if there is no integer greater than 1 that divides both of them. In other words, x and y are coprime if gcd(x, y) == 1, where gcd(x, y) is the greatest common divisor of x and y ********

// <======== Example ========>
// Input: nums = [2,5,1,4]
// Output: 5

// Input: nums = [11,21,12]
// Output: 2




class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                int firstDigit = to_string(nums[i])[0] - '0';
                int lastDigit = nums[j] % 10;

                if(gcd(firstDigit, lastDigit) == 1) {
                    count++;
                }
            }
        }

        return count;
    }
};