// ******** Given two string arrays word1 and word2, return true if the two arrays represent the same string, and false otherwise. A string is represented by an array if the array elements concatenated in order forms the string. ********

// <======== Example ========>
// Input: word1 = ["ab", "c"], word2 = ["a", "bc"]
// Output: true

// Input: word1 = ["a", "cb"], word2 = ["ab", "c"]
// Output: false

// Input: word1  = ["abc", "d", "defg"], word2 = ["abcddefg"]
// Output: true




class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1 = "";
        string str2 = "";

        for(int i = 0; i < word1.size(); i++) {
            str1 += word1[i];
        }

        for(int i = 0; i < word2.size(); i++) {
            str2 += word2[i];
        }

        bool ans = (str1 == str2);
        return ans;
    }
};