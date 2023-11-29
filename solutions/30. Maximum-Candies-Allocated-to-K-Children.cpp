// ******** You are given a 0-indexed integer array candies. Each element in the array denotes a pile of candies of size candies[i]. You can divide each pile into any number of sub piles, but you cannot merge two piles together. You are also given an integer k. You should allocate piles of candies to k children such that each child gets the same number of candies. Each child can take at most one pile of candies and some piles of candies may go unused. Return the maximum number of candies each child can get. ********

// <======== Example ========>
// Input: candies = [5,8,6], k = 3
// Output: 5

// Input: candies = [2,5], k = 11
// Output: 0




class Solution {
public:
    bool isValid(vector<int> &pile, long long k, int mid) {
        long long count = 0;
        for(int i = 0; i < pile.size(); i++) {
            count += pile[i] / mid;
            if(count > k) {
                return true;
            }
        }

        return (count >= k);
    }

    int maximumCandies(vector<int>& candies, long long k) {
        int start = 1;
        int end = *max_element(candies.begin(), candies.end());
        int ans = 0;

        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(isValid(candies, k, mid)) {
                ans = mid;
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return ans;
    }
};