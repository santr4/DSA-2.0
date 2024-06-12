// 416. Partition Equal Subset Sum

class Solution
{
public:
    bool partitionEqualSubsetSum(int index, int target, vector<int> &nums, vector<vector<int>> &dp)
    {
        if (target == 0)
        {
            return true;
        }
        if (index == 0)
        {
            return nums[0] == target;
        }
        if (dp[index][target] != -1)
        {
            return dp[index][target];
        }
        bool notTaken = partitionEqualSubsetSum(index - 1, target, nums, dp);
        bool taken = false;
        if (nums[index] <= target)
        {
            taken = partitionEqualSubsetSum(index - 1, target - nums[index], nums, dp);
        }
        return dp[index][target] = taken || notTaken;
    }

    bool canPartition(vector<int> &nums)
    {
        int n = nums.size();
        int totalSum = 0;
        for (int i = 0; i < n; i++)
        {
            totalSum += nums[i];
        }
        if (totalSum % 2 == 0)
        {
            int k = totalSum / 2;
            vector<vector<int>> dp(n, vector<int>(k + 1, -1));
            return partitionEqualSubsetSum(n - 1, k, nums, dp);
        }
        else
        {
            return false;
        }
    }
};