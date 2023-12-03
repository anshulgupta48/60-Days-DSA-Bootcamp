// ******** You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number. You are given an integer array nums representing the data status of this set after the error. Find the number that occurs twice and the number that is missing and return them in the form of an array. ********

// <======== Example ========>
// Input: nums = [1,2,2,4]
// Output: [2,3]

// Input: nums = [1,1]
// Output: [1,2]




class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> count(n+1, 0);
        for(auto x: nums) {
            count[x]++;
        }

        vector<int> ans;
        int miss = -1;
        int hit = -1;
        for(int i = 1; i <= n; i++) {
            if(count[i] == 0) {
                miss = i;
            }
            else if(count[i] == 2) {
                hit = i;
            }
        }

        ans.push_back(hit);
        ans.push_back(miss);
        return ans;
    }
};