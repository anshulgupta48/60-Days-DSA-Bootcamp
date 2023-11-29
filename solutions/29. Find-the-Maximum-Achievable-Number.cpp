// ******** You are given two integers, num and t. An integer x is called achievable if it can become equal to num after applying the following operation no more than t times: Increase or decrease x by 1, and simultaneously increase or decrease num by 1. Return the maximum possible achievable number. It can be proven that there exists at least one achievable number. ********

// <======== Example ========>
// Input: num = 4, t = 1
// Output: 6

// Input: num = 3, t = 2
// Output: 7

// Input: piles = [30,11,23,4,20], h = 6
// Output: 23




class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int ans = num + 2*t;
        return ans;
    }
};