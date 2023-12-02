// ******** You are given a string s of even length. Split this string into two halves of equal lengths, and let a be the first half and b be the second half. Two strings are alike if they have the same number of vowels ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice that s contains uppercase and lowercase letters. Return true if a and b are alike. Otherwise, return false. ********

// <======== Example ========>
// Input: s = "book"
// Output: true

// Input: s = "textbook"
// Output: false




class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size();
        int count1 = 0;
        int count2 = 0;

        for(int i = 0; i < n/2; i++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                count1++;
            }
        }

        for(int i = n/2; i < n; i++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                count2++;
            }
        }

        if(count1 == count2) {
            return true;
        }

        return false;
    }
};