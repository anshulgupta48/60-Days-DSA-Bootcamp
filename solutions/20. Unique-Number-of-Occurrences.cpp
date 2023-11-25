// ******** Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise. ********

// <======== Example ========>
// Input: arr = [1,2,2,1,1,3]
// Output: true

// Input: arr = [1,2]
// Output: false

// Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
// Output: true




class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mp;
        bool ok = true;
        for(auto x: arr) {
            mp[x]++;
        }

        set<int> s;
        for(auto x: mp) {
            if(s.find(x.second) == s.end()) {
                s.insert(x.second);
            }
            else {
                ok = false;
            }
        }

        return ok;
    }
};