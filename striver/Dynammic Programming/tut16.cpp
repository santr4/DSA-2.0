// minimum coins - DP subsequence

#include <bits/stdc++.h>
using namespace std;

int minCoins2(int index, int T, vector<int> &arr, vector<vector<int>> &dp)
{
    if (index == 0)
    {
        if (T % arr[0] == 0)
        {
            return T / arr[0];
        }
        else
        {
            return 1e9;
        }
    }
    if (dp[index][T] != -1)
    {
        return dp[index][T];
    }
    int notTaken = 0 + minCoins2(index - 1, T, arr, dp);
    int taken = 1e9;
    if (arr[index] <= T)
    {
        taken = 1 + minCoins2(index - 1, T - arr[index], arr, dp);
    }
    return dp[index][T] = min(taken, notTaken);
}

int minCoins(vector<int> &arr, int T)
{
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(T + 1, -1));
    int ans = minCoins2(n - 1, T, arr, dp);
    if (ans >= 1e9)
    {
        return -1;
    }
    else
    {
        return ans;
    }
}

int main()
{
    vector<int> arr = {1, 2, 5};
    int T = 11;
    cout << minCoins(arr, T);
    return 0;
}