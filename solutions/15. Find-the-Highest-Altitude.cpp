// ******** There is a biker going on a road trip. The road trip consists of n + 1 points at different altitudes. The biker starts his trip on point 0 with altitude equal 0. You are given an integer array gain of length n where gain[i] is the net gain in altitude between points i​​​​​​ and i + 1 for all (0 <= i < n). Return the highest altitude of a point. ********

// <======== Example ========>
// Input: gain = [-5,1,5,0,-7]
// Output: 1

// Input: gain = [-4,-3,-2,-1,4,3,2]
// Output: 0




class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int leftSum = 0;
        int ans = 0;

        for(int i = 0; i < n; i++) {
            leftSum += gain[i];
            ans = max(ans, leftSum);
        }

        return ans;
    }
};