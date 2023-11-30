// ******** A conveyor belt has packages that must be shipped from one port to another within days days. The ith package on the conveyor belt has a weight of weights[i]. Each day, we load the ship with packages on the conveyor belt (in the order given by weights). We may not load more weight than the maximum weight capacity of the ship. Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within d days. ********

// <======== Example ========>
// Input: weights = [1,2,3,4,5,6,7,8,9,10], days = 5
// Output: 15

// Input: weights = [3,2,2,4,1,4], days = 3
// Output: 6

// Input: weights = [1,2,3,1,1], days = 4
// Output: 3




class Solution {
public:
    int calculate_weight(vector<int> &weights, int n) {
        int load = 0;
        int days = 1;

        for(int i = 0; i < weights.size(); i++) {
            if((load + weights[i]) > n) {
                days++;
                load = weights[i];
            }
            else {
                load += weights[i];
            }
        }

        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
       int n = weights.size();
       int start = *max_element(weights.begin(), weights.end());
       int end =  accumulate(weights.begin(), weights.end(), 0);

       while(start <= end) {
           int mid = start + (end - start) / 2;
           if(calculate_weight(weights, mid) <= days) {
               end = mid - 1;
           }
           else {
               start = mid + 1;
           }
       }

       return start;
    }
};