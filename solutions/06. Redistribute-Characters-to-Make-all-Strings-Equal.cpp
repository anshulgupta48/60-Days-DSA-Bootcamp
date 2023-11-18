// ******** You are given an array of strings words (0-indexed). In one operation, pick two distinct indices i and j, where words[i] is a non-empty string, and move any character from words[i] to any position in words[j]. Return true if you can make every string in words equal using any number of operations, and false otherwise ********

// <======== Example ========>
// Input: words = ["abc","aabc","bc"]
// Output: true

// Input: words = ["ab","a"]
// Output: false




class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n = words.size();
        vector<int> count(26, 0);

        for(auto temp: words) {
            for(auto x: temp) {
                count[x-'a']++;
            }
        }

        for(int i = 0; i < 26; i++) {
            if(count[i]%n != 0) {
                return false;
            }
        }

        return true;
    }
};