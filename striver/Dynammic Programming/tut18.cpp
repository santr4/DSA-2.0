// 518. Coin Change II

class Solution
{
public:
    int f(int idx, int amount, vector<int> &coins, vector<vector<int>> &dp)
    {
        if (amount == 0)
        {
            return 1;
        }
        if (idx < 0)
            return 0;
        if (dp[idx][amount] != -1)
        {
            return dp[idx][amount];
        }
        int a = 0;
        if (coins[idx] <= amount)
        {
            a = f(idx, amount - coins[idx], coins, dp);
        }

        int b = f(idx - 1, amount, coins, dp);
        return dp[idx][amount] = a + b;
    }
    int change(int amount, vector<int> &coins)
    {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount + 1, -1));
        return f(coins.size() - 1, amount, coins, dp);
    }
};