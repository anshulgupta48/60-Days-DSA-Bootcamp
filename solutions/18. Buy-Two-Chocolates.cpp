// ******** You are given an integer array prices representing the prices of various chocolates in a store. You are also given a single integer money, which represents your initial amount of money. You must buy exactly two chocolates in such a way that you still have some non-negative leftover money. You would like to minimize the sum of the prices of the two chocolates you buy. Return the amount of money you will have leftover after buying the two chocolates. If there is no way for you to buy two chocolates without ending up in debt, return money. Note that the leftover must be non-negative. ********

// <======== Example ========>
// Input: prices = [1,2,2], money = 3
// Output: 0

// Input: prices = [3,2,3], money = 3
// Output: 3




class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n = prices.size();
        sort(prices.begin(), prices.end());

        if((prices[0] + prices[1]) <= money) {
            int ans = money - (prices[0] + prices[1]);
            return ans;
        }

        return money;
    }
};