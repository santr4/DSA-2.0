// 198. House Robber

class Solution
{
public:
    int maxRobbery(int index, vector<int> &nums, vector<int> &dp)
    {
        // memoization
        if (index < 0)
        {
            return 0;
        }
        if (dp[index] != -1)
        {
            return dp[index];
        }
        if (index == 0)
        {
            return nums[index];
        }
        int pick = nums[index] + maxRobbery(index - 2, nums, dp);
        int notpick = 0 + maxRobbery(index - 1, nums, dp);
        return dp[index] = max(pick, notpick);
    }

    int rob(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> dp(n, -1);
        return maxRobbery(n - 1, nums, dp);
    }
};