// ******** You are given a 0-indexed array of strings details. Each element of details provides information about a given passenger compressed into a string of length 15. The system is such that: The first ten characters consist of the phone number of passengers. The next character denotes the gender of the person. The following two characters are used to indicate the age of the person. The last two characters determine the seat allotted to that person. Return the number of passengers who are strictly more than 60 years old. ********

// <======== Example ========>
// Input: details = ["7868190130M7522","5303914400F9211","9273338290F4010"]
// Output: 2

// Input: details = ["1313579440F2036","2921522980M5644"]
// Output: 0




class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans = 0;
        for(auto x: details) {
            string str = "";
            str.push_back(x[11]);
            str.push_back(x[12]);

            int temp = stoi(str);
            if(temp > 60) {
                ans++;
            }
        }

        return ans;
    }
};