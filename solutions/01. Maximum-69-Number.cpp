// ******** You are given a positive integer num consisting only of digits 6 and 9. Return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6) ********

// <======== Example ========>
// Input: num = 9669
// Output: 9969

// Input: num = 9996
// Output: 9999

// Input: num = 9999
// Output: 9999




class Solution {
public:
    int maximum69Number (int num) {
        string temp = to_string(num);
        for(int i = 0; i < temp.length(); i++) {
            if(temp[i] == '6') {
                temp[i] = '9';
                break;
            }
        }

        int ans = stoi(temp);
        return ans;
    }
};