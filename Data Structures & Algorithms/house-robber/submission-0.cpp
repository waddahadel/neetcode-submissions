class Solution {
public:
    int rob(vector<int>& nums) {
        // define this
        int n = nums.size();

        // define our dynamic prog array
        vector<int> dp(n + 1, 0);

        // second element is the first in the nums vec
        dp[1] = nums[0];

        // now we loop starting from the second element in the nums array
        for(int i = 1; i < nums.size(); ++i){
            // we make that choice at each step
            dp[i+1] = max(dp[i], dp[i - 1] + nums[i]);
        }

        return dp[n];
    }
};
