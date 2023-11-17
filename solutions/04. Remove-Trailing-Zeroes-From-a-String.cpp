// ******** Given a positive integer num represented as a string, return the integer num without trailing zeros as a string ********

// <======== Example ========>
// Input: num = "51230100"
// Output: "512301"

// Input: num = "123"
// Output: "123"




class Solution {
public:
    string removeTrailingZeros(string num) {
        while(num.back() == '0') {
            num.pop_back();
        }

        return num;
    }
};