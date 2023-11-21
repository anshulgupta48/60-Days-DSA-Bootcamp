// ******** Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order ********

// <======== Example ========>
// Input: nums = [1,1,1,2,2,3], k = 2
// Output: [1,2]

// Input: nums = [1], k = 1
// Output: [1]




class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        for(auto x: nums) {
            mp[x]++;
        }

        vector<pair<int, int>> temp;
        for(auto x: mp) {
            temp.push_back({x.second, x.first});
        }

        sort(temp.rbegin(), temp.rend());
        vector<int> ans;
        for(int i = 0; i < k; i++) {
            ans.push_back(temp[i].second);
        }

        return ans;
    }
};