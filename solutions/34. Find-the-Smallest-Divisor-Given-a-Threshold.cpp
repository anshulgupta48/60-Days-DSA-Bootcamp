// ******** Given an array of integers nums and an integer threshold, we will choose a positive integer divisor, divide all the array by it, and sum the division's result. Find the smallest divisor such that the result mentioned above is less than or equal to threshold. Each result of the division is rounded to the nearest integer greater than or equal to that element. (For example: 7/3 = 3 and 10/2 = 5). The test cases are generated so that there will be an answer. ********

// <======== Example ========>
// Input: nums = [1,2,5,9], threshold = 6
// Output: 5

// Input: nums = [44,22,33,11,1], threshold = 5
// Output: 44




class Solution {
public:
    int sumByDivisor(vector<int> &nums, int divisor) {
        int n = nums.size();
        int sum = 0;
        
        for(int i = 0; i < n; i++) {
            sum += ceil((double)nums[i] / (double)divisor);
        }

        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int start = 1;
        int end = *max_element(nums.begin(), nums.end());

        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(sumByDivisor(nums, mid) <= threshold) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        return start;
    }
};