// Geek Jump

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minEnergy(int index, vector<int> &height, vector<int> &dp)
    {
        if (index == 0)
        {
            return 0;
        }
        if (dp[index] != -1)
        {
            return dp[index];
        }
        int oneStep = minEnergy(index - 1, height, dp) + abs(height[index] - height[index - 1]);
        int twoStep = INT_MAX;
        if (index > 1)
        {
            twoStep = minEnergy(index - 2, height, dp) + abs(height[index] - height[index - 2]);
        }
        return dp[index] = min(oneStep, twoStep);
    }
    int minimumEnergy(vector<int> &height, int n)
    {
        // Code here
        // memoization approach
        // first we will write the recursive solution then we will convert that into a dp solution.
        vector<int> dp(n, -1);
        return minEnergy(n - 1, height, dp);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}