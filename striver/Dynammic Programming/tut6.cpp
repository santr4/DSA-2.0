// 213. House Robber II

class Solution
{
public:
    int maxRobbery(vector<int> &nums, int start, int end, vector<int> &dp)
    {
        if (start > end)
        {
            return 0;
        }
        if (dp[start] != -1)
        {
            return dp[start];
        }
        int rob_current = nums[start] + (start + 2 <= end ? maxRobbery(nums, start + 2, end, dp) : 0);
        int skip_current = maxRobbery(nums, start + 1, end, dp);

        return dp[start] = max(rob_current, skip_current);
    }
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
        {
            return nums[0];
        }
        vector<int> dp1(n, -1);
        vector<int> dp2(n, -1);
        int rob_exclude_first = maxRobbery(nums, 1, n - 1, dp1);
        int rob_exclude_last = maxRobbery(nums, 0, n - 2, dp2);

        return max(rob_exclude_first, rob_exclude_last);
    }
};