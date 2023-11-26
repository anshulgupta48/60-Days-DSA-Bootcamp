// ******** You are given an array of strings words and a string chars. A string is good if it can be formed by characters from chars (each character can only be used once). Return the sum of lengths of all good strings in words. ********

// <======== Example ========>
// Input: words = ["cat","bt","hat","tree"], chars = "atach"
// Output: 6

// Input: words = ["hello","world","leetcode"], chars = "welldonehoneyr"
// Output: 10




class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans = 0;
        vector<int> charsCount(26, 0);
        for(auto x: chars) {
            charsCount[x-'a']++;
        }

        for(auto temp: words) {
            vector<int> wordsCount(26, 0);
            for(auto x: temp) {
                wordsCount[x-'a']++;
            }

            int n = temp.size();
            bool isValid = true;
            for(int i = 0; i < 26; i++) {
                if(charsCount[i] < wordsCount[i]) {
                    isValid = false;
                }
            }

            if(isValid == true) {
                ans += n;
            }
        }

        return ans;
    }
};