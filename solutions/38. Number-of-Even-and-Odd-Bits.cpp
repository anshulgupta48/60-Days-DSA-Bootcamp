// ******** You are given a positive integer n. Let even denote the number of even indices in the binary representation of n (0-indexed) with value 1. Let odd denote the number of odd indices in the binary representation of n (0-indexed) with value 1. Return an integer array answer where answer = [even, odd]. ********

// <======== Example ========>
// Input: n = 17
// Output: [2,0]

// Input: n = 2
// Output: [0,1]




class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even = 0;
        int odd = 0;

        for(int i = 9; i >= 0; i--) {
            if(n & (1<<i)) {
                if(i%2 == 0) {
                    even++;
                }
                else {
                    odd++;
                }
            }
        }

        return {even, odd};
    }
};