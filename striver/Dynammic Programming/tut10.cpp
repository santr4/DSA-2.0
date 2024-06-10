// 64. Minimum Path Sum

class Solution
{
public:
    int minPsum(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp)
    {
        if (i < 0 || j < 0)
        {
            return INT_MAX;
        }
        if (i == 0 && j == 0)
        {
            return grid[0][0];
        }
        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }
        int up = (i > 0) ? minPsum(i - 1, j, grid, dp) : INT_MAX;
        int left = (j > 0) ? minPsum(i, j - 1, grid, dp) : INT_MAX;

        dp[i][j] = grid[i][j] + min(up, left);
        return dp[i][j];
    }
    int minPathSum(vector<vector<int>> &grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return minPsum(m - 1, n - 1, grid, dp);
    }
};