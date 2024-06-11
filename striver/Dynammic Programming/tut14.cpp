// Subset sum equals to k -> memoization approach

#include <bits/stdc++.h>
using namespace std;

bool subsetSumUtil(int index, int target, vector<int> &array, vector<vector<int>> &dp)
{
    if (target == 0)
    {
        return true;
    }
    if (index == 0)
    {
        return (array[0] == target);
    }
    if (dp[index][target] != -1)
    {
        return dp[index][target];
    }
    bool notTaken = subsetSumUtil(index - 1, target, array, dp);
    bool taken = false;
    if (array[index] <= target)
    {
        taken = subsetSumUtil(index - 1, target - array[index], array, dp);
    }
    return dp[index][target] = taken || notTaken;
}

bool subsetSumToK(int n, int k, vector<int> &array)
{
    vector<vector<int>> dp(n, vector<int>(k + 1, -1));
    return subsetSumUtil(n - 1, k, array, dp);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    int target = 4;
    int n = arr.size();
    if (subsetSumToK(n, target, arr))
    {
        cout << "subset with the given target sum found" << endl;
    }
    else
    {
        cout << " subset with the given target sum not found" << endl;
    }
    return 0;
}