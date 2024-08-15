// 73. Set Matrix Zeroes.
// better approach.

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> cols(m, 1);
        vector<int> rows(n, 1);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == 0)
                {
                    rows[i] = -1;
                    cols[j] = -1;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (rows[i] == -1)
            {
                for (int j = 0; j < m; j++)
                {
                    matrix[i][j] = 0;
                }
            }
        }
        for (int j = 0; j < m; j++)
        {
            if (cols[j] == -1)
            {
                for (int i = 0; i < n; i++)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

// optimal approach

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        int col0 = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    if (j != 0)
                    {
                        matrix[0][j] = 0;
                    }
                    if (j == 0)
                    {
                        col0 = 0;
                    }
                }
            }
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (matrix[i][j] != 0)
                {
                    if (matrix[i][0] == 0 || matrix[0][j] == 0)
                    {
                        matrix[i][j] = 0;
                    }
                }
            }
        }
        if (matrix[0][0] == 0)
        {
            for (int j = 0; j < m; j++)
            {
                matrix[0][j] = 0;
            }
        }
        if (col0 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                matrix[i][0] = 0;
            }
        }
    }
};