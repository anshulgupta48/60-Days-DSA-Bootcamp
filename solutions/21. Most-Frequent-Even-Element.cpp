// ******** Given an integer array nums, return the most frequent even element. If there is a tie, return the smallest one. If there is no such element, return -1. ********

// <======== Example ========>
// Input: nums = [0,1,2,2,4,4,1]
// Output: 2

// Input: nums = [4,4,4,9,2,4]
// Output: 4

// Input: nums = [29,47,21,41,13,37,25,7]
// Output: -1




class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size(), i;
        map<int, int> freq;
        for(auto x: nums){
            freq[x]++;
        }

        int evenFreq = 0, ans = -1;
        for(auto y: freq){
            if(y.first%2 == 0 && y.second > evenFreq){
                ans = y.first;
                evenFreq = y.second;
            }
        }
        
        return ans;
    }
};