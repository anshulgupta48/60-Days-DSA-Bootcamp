// ******** You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them. We repeatedly make duplicate removals on s until we no longer can. Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique. ********

// <======== Example ========>
// Input: s = "abbaca"
// Output: "ca"

// Input: s = "azxxzy"
// Output: "ay"




class Solution {
public:
    string removeDuplicates(string s) {
        string temp = "";
        int i = 0;

        while(i < s.length()) {
            if(temp.empty() || s[i] != temp.back()) {
                temp.push_back(s[i]);
            }
            else {
                temp.pop_back();
            }

            i++;
        }

        return temp;
    }
};