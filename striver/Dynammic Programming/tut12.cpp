// 931. Minimum Falling Path Sum

class Solution
{
public:
    int minFallingPathSum(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));

        // Function to calculate the minimum path sum from cell (i, j)
        std::function<int(int, int)> minPathSum = [&](int i, int j)
        {
            if (j < 0 || j >= n)
                return INT_MAX;
            if (dp[i][j] != -1)
                return dp[i][j];
            if (i == n - 1)
                return dp[i][j] = matrix[i][j];

            int leftDiagonal = minPathSum(i + 1, j - 1);
            int down = minPathSum(i + 1, j);
            int rightDiagonal = minPathSum(i + 1, j + 1);

            return dp[i][j] = matrix[i][j] + min({leftDiagonal, down, rightDiagonal});
        };

        // Compute the result for each starting cell in the first row
        int minSum = INT_MAX;
        for (int j = 0; j < n; ++j)
        {
            minSum = min(minSum, minPathSum(0, j));
        }

        return minSum;
    }
};