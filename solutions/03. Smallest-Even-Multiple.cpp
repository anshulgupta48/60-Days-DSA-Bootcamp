// ******** Given a positive integer n, return the smallest positive integer that is a multiple of both 2 and n ********

// <======== Example ========>
// Input: n = 5
// Output: 10

// Input: n = 6
// Output: 6




class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2 == 0) {
            return n;
        }

        return 2*n;
    }
};