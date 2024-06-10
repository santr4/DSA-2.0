// 63. Unique Paths II

class Solution
{
public:
    int uniquePathsII(vector<vector<int>> &v, int i, int j, vector<vector<int>> &dp)
    {
        if (i < 0 || j < 0 || v[i][j] == 1)
        {
            return 0;
        }
        if (i == 0 && j == 0)
        {
            return 1;
        }
        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }
        int up = uniquePathsII(v, i - 1, j, dp);
        int left = uniquePathsII(v, i, j - 1, dp);
        return dp[i][j] = up + left;
    }
    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
    {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return uniquePathsII(obstacleGrid, m - 1, n - 1, dp);
        ;
    }
};