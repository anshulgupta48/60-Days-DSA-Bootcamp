// ******** You are given an array of strings names, and an array heights that consists of distinct positive integers. Both arrays are of length n. For each index i, names[i] and heights[i] denote the name and height of the ith person. Return names sorted in descending order by the people's heights ********

// <======== Example ========>
// Input: names = ["Mary","John","Emma"], heights = [180,165,170]
// Output: ["Mary","Emma","John"]

// Input: names = ["Alice","Bob","Bob"], heights = [155,185,150]
// Output: ["Bob","Alice","Bob"]




class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<pair<int, string>> temp;
        
        for(int i = 0; i < n; i++) {
            temp.push_back({heights[i], names[i]});
        }

        sort(temp.rbegin(), temp.rend());
        vector<string> ans;
        for(int i = 0; i < n; i++) {
            ans.push_back(temp[i].second);
        }

        return ans;
    }
};